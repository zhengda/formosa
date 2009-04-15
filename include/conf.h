
#ifndef _BBS_CONF_H_
#define _BBS_CONF_H_

#ifdef _BBS_CONF_C_
#define BBS_CONF_IS_EXTERN
#else
#define BBS_CONF_IS_EXTERN extern
#endif

BBS_CONF_IS_EXTERN char *BBSNAME, *BBSTITLE, *MAILSERVER,
	*MENU_TITLE_COLOR, *MENU_TITLE_COLOR1, *_STR_BOARD_GUEST;

BBS_CONF_IS_EXTERN int MULTILOGINS, MAX_SIG_LINES, MAX_SIG_NUM,
	IDLE_TIMEOUT, MAX_MAILGROUPS, MAX_KEEP_MAIL, SPEC_MAX_KEEP_MAIL,
	MAX_GUEST_LOGINS, MAX_MAIL_SIZE, MAX_FRIENDS, CHATPORT;

#endif	/* !_BBS_CONF_H_ */
