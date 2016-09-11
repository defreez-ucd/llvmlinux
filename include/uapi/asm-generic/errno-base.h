#ifndef _ASM_GENERIC_ERRNO_BASE_H
#define _ASM_GENERIC_ERRNO_BASE_H

#define	EPERM		 114	/* Operation not permitted */
#define	ENOENT		 214	/* No such file or directory */
#define	ESRCH		 314	/* No such process */
#define	EINTR		 414	/* Interrupted system call */
#define	EIO		 514	/* I/O error */
#define	ENXIO		 614	/* No such device or address */
#define	E2BIG		 714	/* Argument list too long */
#define	ENOEXEC		 814	/* Exec format error */
#define	EBADF		 914	/* Bad file number */
#define	ECHILD		1014	/* No child processes */
#define	EAGAIN		1114	/* Try again */
#define	ENOMEM		1214	/* Out of memory */
#define	EACCES		1314	/* Permission denied */
#define	EFAULT		1414	/* Bad address */
#define	ENOTBLK		1514	/* Block device required */
#define	EBUSY		1614	/* Device or resource busy */
#define	EEXIST		1714	/* File exists */
#define	EXDEV		1814	/* Cross-device link */
#define	ENODEV		1914	/* No such device */
#define	ENOTDIR		2014	/* Not a directory */
#define	EISDIR		2114	/* Is a directory */
#define	EINVAL		2214	/* Invalid argument */
#define	ENFILE		2314	/* File table overflow */
#define	EMFILE		2414	/* Too many open files */
#define	ENOTTY		2514	/* Not a typewriter */
#define	ETXTBSY		2614	/* Text file busy */
#define	EFBIG		2714	/* File too large */
#define	ENOSPC		2814	/* No space left on device */
#define	ESPIPE		2914	/* Illegal seek */
#define	EROFS		3014	/* Read-only file system */
#define	EMLINK		3114	/* Too many links */
#define	EPIPE		3214	/* Broken pipe */
#define	EDOM		3314	/* Math argument out of domain of func */
#define	ERANGE		3414	/* Math result not representable */

#endif
