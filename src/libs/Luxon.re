type dateTime;
type interval;
type zone;

class type _duration =
  [@bs]
  {
    pub day: int;
    pub daysInMonth: int;
    pub daysInYear: int;
    pub hour: int;
    pub invalidReason: string;
    pub isInDST: bool;
    pub isInLeapYear: bool;
    pub isOffsetFixed: bool;
    pub isValid: bool;
    pub locale: string;
    pub millisecond: int;
    pub minute: int;
    pub month: int;
    pub monthLong: string;
    pub monthShort: string;
    pub numberingSystem: string;
    pub offset: int;
    pub offsetNameLong: string;
    pub offsetNameShort: string;
    pub ordinal: int;
    pub outputCalendar: string;
    pub second: int;
    pub weekNumber: int;
    pub weekYear: int;
    pub weekday: int;
    pub weekdayLong: string;
    pub weekdayShort: string;
    pub year: int;
    pub zoneName: int;

    pub draw: unit => unit
  };

type duration = Js.t(_duration);


module DateTime {
  type options = {
    zone: zone,
    setZone: bool,
    locale: string,
    outputCalendar: string,
    numberingSystem: string,
  };

  [@bs.module "luxon"] external utc : (~year: int, ~month:int, ~day: int, ~hour: int, ~minute: int, ~second: int, ~millisecond: int) => duration = "DateTime.utc";

  [@bs.module "luxon"] [@bs.splice] external max : array(dateTime) => option(dateTime) = "DateTime.max";
};

module Duration {
  [@bs.module "luxon"] external fromISO : (~iso:string) => duration = "Duration.fromISO";
  [@bs.module "luxon"] external fromMillis : (~millis:int) => duration = "Duration.fromMillis";

  /* let toResult = (duration:duration) => duration.isValid ? Js.Result.Ok(duration) : Js.Result.Error(duration.invalidReason); */

  /* [@bs.send.pipe : duration]
  external plus : (~duration:duration) => duration = "plus";

  [@bs.send.pipe : duration]
  external plusMillis : (~millis:int) => duration = "plus"; */
};

module Interval {

};
