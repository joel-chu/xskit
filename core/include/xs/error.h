#ifndef _XS_ERROR_H_
#define _XS_ERROR_H_

enum
{
	XS_EC_BEGIN_AT				= XS_EC_BEGIN,

	XS_EC_BUFFER_LOW,
	XS_EC_UNKNOWN_FIELD,
	XS_EC_USER_BREAK,

	XS_EC_NOT_READY,

	XS_EC_SCRIPT_BEGIN,
	XS_EC_SCRIPT_END		= XS_EC_SCRIPT_BEGIN + 32,

	XS_EC_ERROR_MAX
};

#endif /* _XS_ERROR_H_ */
