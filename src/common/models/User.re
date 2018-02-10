type user = {
  id: Uuid.uuid,
  firstName: string,
  lastName: string,
  phone: string,
  phoneSecondary: option(string),
  email: string,
  password: string,
  avatarId: option(Uuid.uuid),
  licenseNumber: option(string),
  licenseFileId: option(string),
  birthdate: string,
  birthplace: string,
  addressStreet: string,
  addressZipcode: string,
  addressCity: string,
  studentNumber: option(string),
  isUPS: bool,
  deleteMedicalRecord: bool,
  isAspirinAllergic: bool,
  medicalCertificateId: option(Uuid.uuid),
  /* medicalCertificateExpiresAt: option(date), */
  insuranceId: option(Uuid.uuid),
  inscuranceFileId: option(Uuid.uuid),
  parentalPermissionFileId: option(Uuid.uuid),
  isAdmin: bool,
  passwordToken: option(string),
  sessionToken: string,
  newEmail: option(string),
  newEmailToken: option(string),
};

type insurance = {
  id: Uuid.uuid,
  name: string,
};

type vehiculeKind = Car | Truck;

type vehicule = {
  id: Uuid.uuid,
  ownerId: Uuid.uuid,
  kind: vehiculeKind,
  capacity: int,
  sleeping: bool,
};

type contact = {
  id: Uuid.uuid,
  userId: Uuid.uuid,
  firstname: string,
  lastname: string,
  phone: string,
  phoneSecondary: option(string),
};




