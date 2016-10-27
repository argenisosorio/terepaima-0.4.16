#
# Regular cron jobs for the terepaima package
#
0 4	* * *	root	[ -x /usr/bin/terepaima_maintenance ] && /usr/bin/terepaima_maintenance
