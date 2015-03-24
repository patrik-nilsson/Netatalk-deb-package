/* Generated by the Systemtap dtrace wrapper */

#define _SDT_HAS_SEMAPHORES 1


#define STAP_HAS_SEMAPHORES 1 /* deprecated */


#include <sys/sdt.h>

/* AFP_AFPFUNC_START ( int func, char *funcname) */
#if defined STAP_SDT_V1
#define AFP_AFPFUNC_START_ENABLED() __builtin_expect (afpfunc__start_semaphore, 0)
#define afp_afpfunc__start_semaphore afpfunc__start_semaphore
#else
#define AFP_AFPFUNC_START_ENABLED() __builtin_expect (afp_afpfunc__start_semaphore, 0)
#endif
__extension__ extern unsigned short afp_afpfunc__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define AFP_AFPFUNC_START(arg1,arg2) \
DTRACE_PROBE2(afp,afpfunc__start,arg1,arg2)

/* AFP_AFPFUNC_DONE ( int func, char *funcname) */
#if defined STAP_SDT_V1
#define AFP_AFPFUNC_DONE_ENABLED() __builtin_expect (afpfunc__done_semaphore, 0)
#define afp_afpfunc__done_semaphore afpfunc__done_semaphore
#else
#define AFP_AFPFUNC_DONE_ENABLED() __builtin_expect (afp_afpfunc__done_semaphore, 0)
#endif
__extension__ extern unsigned short afp_afpfunc__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define AFP_AFPFUNC_DONE(arg1,arg2) \
DTRACE_PROBE2(afp,afpfunc__done,arg1,arg2)

/* AFP_READ_START ( long size) */
#if defined STAP_SDT_V1
#define AFP_READ_START_ENABLED() __builtin_expect (read__start_semaphore, 0)
#define afp_read__start_semaphore read__start_semaphore
#else
#define AFP_READ_START_ENABLED() __builtin_expect (afp_read__start_semaphore, 0)
#endif
__extension__ extern unsigned short afp_read__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define AFP_READ_START(arg1) \
DTRACE_PROBE1(afp,read__start,arg1)

/* AFP_READ_DONE () */
#if defined STAP_SDT_V1
#define AFP_READ_DONE_ENABLED() __builtin_expect (read__done_semaphore, 0)
#define afp_read__done_semaphore read__done_semaphore
#else
#define AFP_READ_DONE_ENABLED() __builtin_expect (afp_read__done_semaphore, 0)
#endif
__extension__ extern unsigned short afp_read__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define AFP_READ_DONE() \
DTRACE_PROBE(afp,read__done)

/* AFP_WRITE_START ( long size) */
#if defined STAP_SDT_V1
#define AFP_WRITE_START_ENABLED() __builtin_expect (write__start_semaphore, 0)
#define afp_write__start_semaphore write__start_semaphore
#else
#define AFP_WRITE_START_ENABLED() __builtin_expect (afp_write__start_semaphore, 0)
#endif
__extension__ extern unsigned short afp_write__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define AFP_WRITE_START(arg1) \
DTRACE_PROBE1(afp,write__start,arg1)

/* AFP_WRITE_DONE () */
#if defined STAP_SDT_V1
#define AFP_WRITE_DONE_ENABLED() __builtin_expect (write__done_semaphore, 0)
#define afp_write__done_semaphore write__done_semaphore
#else
#define AFP_WRITE_DONE_ENABLED() __builtin_expect (afp_write__done_semaphore, 0)
#endif
__extension__ extern unsigned short afp_write__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define AFP_WRITE_DONE() \
DTRACE_PROBE(afp,write__done)

/* AFP_CNID_START ( char *cnidfunc) */
#if defined STAP_SDT_V1
#define AFP_CNID_START_ENABLED() __builtin_expect (cnid__start_semaphore, 0)
#define afp_cnid__start_semaphore cnid__start_semaphore
#else
#define AFP_CNID_START_ENABLED() __builtin_expect (afp_cnid__start_semaphore, 0)
#endif
__extension__ extern unsigned short afp_cnid__start_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define AFP_CNID_START(arg1) \
DTRACE_PROBE1(afp,cnid__start,arg1)

/* AFP_CNID_DONE () */
#if defined STAP_SDT_V1
#define AFP_CNID_DONE_ENABLED() __builtin_expect (cnid__done_semaphore, 0)
#define afp_cnid__done_semaphore cnid__done_semaphore
#else
#define AFP_CNID_DONE_ENABLED() __builtin_expect (afp_cnid__done_semaphore, 0)
#endif
__extension__ extern unsigned short afp_cnid__done_semaphore __attribute__ ((unused)) __attribute__ ((section (".probes")));
#define AFP_CNID_DONE() \
DTRACE_PROBE(afp,cnid__done)

