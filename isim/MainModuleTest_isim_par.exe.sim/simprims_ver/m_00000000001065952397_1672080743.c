/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif



static void NetDecl_37_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6164);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 4456);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 4344);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_40_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1888U);
    t4 = *((char **)t2);
    t2 = (t0 + 4520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_OrGate(t8, 2, t3, t4);
    t9 = (t0 + 4520);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 4360);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Gate_41_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t2 = (t0 + 4584);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bufIf0Gate(t8, t3, t4);
    t9 = (t0 + 4584);
    xsi_driver_vfirst_trans_bufif(t9, 0, 0);
    t10 = (t0 + 4376);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void simprims_ver_m_00000000001065952397_1672080743_3425688259_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_3425688259", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_3425688259.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_2487444226_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_2487444226", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_2487444226.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_0228656387_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_0228656387", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_0228656387.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_2096539969_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_2096539969", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_2096539969.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_1439546562_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_1439546562", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_1439546562.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_0614076544_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_0614076544", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_0614076544.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_3178788481_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_3178788481", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_3178788481.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_3411573694_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_3411573694", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_3411573694.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_0772606601_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_0772606601", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_0772606601.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_3251593655_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_3251593655", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_3251593655.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_0818166330_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_0818166330", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_0818166330.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_3741733124_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_3741733124", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_3741733124.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_0875686407_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_0875686407", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_0875686407.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_3690168633_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_3690168633", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_3690168633.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_0959420992_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_0959420992", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_0959420992.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001065952397_1672080743_3605918078_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_40_1,(void *)Gate_41_2};
	xsi_register_didat("simprims_ver_m_00000000001065952397_1672080743_3605918078", "isim/MainModuleTest_isim_par.exe.sim/simprims_ver/m_00000000001065952397_1672080743_3605918078.didat");
	xsi_register_executes(pe);
}
