#if !defined(CGROUP_H)
#define CGROUP_H

#include <glib.h> /* gboolean */

void setup_oom_handling(int pid);
gboolean conn_sock_cb(int fd, GIOCondition condition, gpointer user_data);
gboolean check_cgroup2_oom();

#endif // CGROUP_H
