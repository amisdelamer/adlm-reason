
type season = {
  id: Uuid.uuid,
};

type formation = {
  id: Uuid.uuid,
  season: Uuid.uuid,
  name: string,
  managerId: Uuid.uuid,
  levelId: option(Uuid.uuid),
};

type formationGroup = {
  id: Uuid.uuid,
  formationId: Uuid.uuid,
  color: string,
  colorHex: string,
  managerId: Uuid.uuid,
};

type formationMember = {
  userId: Uuid.uuid,
  formationGroupId: Uuid.uuid,
  isTeacher: bool,
};

type formationNote = {
  id: Uuid.uuid,
  userId: Uuid.uuid,
  formationId: Uuid.uuid,
  creatorId: Uuid.uuid,
  /* createdAt: date, */
  value: string,
};
