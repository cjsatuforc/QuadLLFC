#ifndef STATE_H
#define STATE_H

typedef struct state_t {
	float roll;
	float pitch;
	float yaw;
	float x;
	float y;
	float z;
} state_t;

void state_add(state_t *s1, state_t *s2, state_t *sum);
/* diff = s1 - s2 */
void state_subtract(state_t *s1, state_t *s2, state_t *diff);
void state_scale(state_t *s1, float val, state_t *result);

void state_update_from_gyro(void);

state_t *state_inertial_get(void);

#endif 
