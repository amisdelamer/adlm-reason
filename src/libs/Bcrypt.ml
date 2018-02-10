external genSaltSync: rounds:int -> string = "" [@@bs.module "bcrypt"]

external genSalt: rounds:int -> string Js.Promise.t = "" [@@bs.module "bcrypt"]

external hashSync: data:string -> salt:string -> string = "" [@@bs.module "bcrypt"]

external hash: data:string -> salt:string -> string Js.Promise.t = "" [@@bs.module "bcrypt"]

external compareSync: data:string -> encrypted:string -> bool = "" [@@bs.module "bcrypt"]

external compare: data:string -> encrypted:string -> bool Js.Promise.t = "" [@@bs.module "bcrypt"]

external getRounds: encrypted:string -> int = "" [@@bs.module "bcrypt"]
