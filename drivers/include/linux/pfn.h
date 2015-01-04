#ifndef _LINUX_PFN_H_
#define _LINUX_PFN_H_

#ifndef __ASSEMBLY__
#include <linux/types.h>
#endif

#ifndef PAGE_SIZE
#define PAGE_SIZE	VMM_PAGE_SIZE
#endif

#ifndef PAGE_SHIFT
#define PAGE_SHIFT	VMM_PAGE_SHIFT
#endif

#ifndef PAGE_MASK
#define PAGE_MASK	VMM_PAGE_MASK
#endif

#define PFN_ALIGN(x)	(((unsigned long)(x) + (PAGE_SIZE - 1)) & PAGE_MASK)
#define PFN_UP(x)	(((x) + PAGE_SIZE-1) >> PAGE_SHIFT)
#define PFN_DOWN(x)	((x) >> PAGE_SHIFT)
#define PFN_PHYS(x)	((phys_addr_t)(x) << PAGE_SHIFT)

#endif