type uuid = string

external v1: unit -> string = "uuid/v1" [@@bs.module]

external v3: name:string -> namespace:string -> string = "uuid/v3" [@@bs.module]

external v4: unit -> string = "uuid/v4" [@@bs.module]

external v5: name:string -> namespace:string -> string = "uuid/v5" [@@bs.module]

type namespace = {
  dns: string;
  url: string;}

type namespaces = {
  v3: namespace;
  v5: namespace;}

let namespaces =
  {
    v3 = { dns = "6ba7b810-9dad-11d1-80b4-00c04fd430c8"; url = "6ba7b811-9dad-11d1-80b4-00c04fd430c8" };
    v5 = { dns = "6ba7b810-9dad-11d1-80b4-00c04fd430c8"; url = "6ba7b811-9dad-11d1-80b4-00c04fd430c8" }
  }
