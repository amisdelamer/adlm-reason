
type event = {
  id: Uuid.uuid,
  creatorId: Uuid.uuid,
  /* createdAt: date, */
  /* from: date, */
  /* to: date, */
  /* chargedAt: option(date), */
  withCarpooling: bool,
};

type eventMember = {
  userId: Uuid.uuid,
  eventId: Uuid.uuid,
  vehiculeId: option(Uuid.uuid),
  notes: option(string),
};

type activity = {
  id: Uuid.uuid,
  eventId: Uuid.uuid,
  /* at: date, */
  price: float,
  description: string,
  cancelled: bool,
};

type activityOptout = {
  userId: Uuid.uuid,
  activityId: Uuid.uuid,
};

type task = {
  id: Uuid.uuid,
  name: string,
  /* at: date, */
  description: string,
  locationId: option(Uuid.uuid),
  needsDriver: bool,
  peopleNeededMin: int,
  peopleNeededMax: int,
};

type userTask = {
  userId: Uuid.uuid,
  taskId: Uuid.uuid,
};
