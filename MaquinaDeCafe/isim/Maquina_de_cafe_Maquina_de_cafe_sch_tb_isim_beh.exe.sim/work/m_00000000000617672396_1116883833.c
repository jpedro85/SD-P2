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
static const char *ng0 = "C:/Users/Francisco MSI/Documents/UNI/Systemas Digitais/P2/Sim/MaquinaDeCafe/Mquina_De_EstadosV2.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static int ng10[] = {2, 0};
static int ng11[] = {4, 0};
static int ng12[] = {6, 0};

static void NetReassign_68_3(char *);


static void Always_42_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 3208);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    goto LAB8;

}

static void Always_53_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5368);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2888);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 7472);
    *((int *)t3) = 1;
    NetReassign_68_3(t0);
    goto LAB2;

LAB7:    xsi_set_current_line(56, ng0);

LAB22:    xsi_set_current_line(57, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB9:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB21;

LAB11:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB21;

LAB13:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB21;

LAB15:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB21;

LAB17:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB21;

LAB19:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB21;

}

static void Always_74_2(char *t0)
{
    char t9[8];
    char t10[8];
    char t30[8];
    char t63[8];
    char t66[8];
    char t82[8];
    char t114[8];
    char t146[8];
    char t149[8];
    char t165[8];
    char t197[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t147;
    char *t148;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t164;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    int t189;
    int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5384);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(78, ng0);

LAB22:    xsi_set_current_line(79, ng0);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t11) != 0)
        goto LAB25;

LAB26:    t19 = (t10 + 4);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB27;

LAB28:    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t19) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t10) > 0)
        goto LAB33;

LAB34:    memcpy(t9, t28, 8);

LAB35:    t29 = (t0 + 3048);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 3);
    goto LAB21;

LAB9:    xsi_set_current_line(82, ng0);

LAB36:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(92, ng0);

LAB45:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB39:    goto LAB21;

LAB11:    xsi_set_current_line(98, ng0);

LAB46:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB49:    goto LAB21;

LAB13:    xsi_set_current_line(105, ng0);

LAB67:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB70:    goto LAB21;

LAB15:    xsi_set_current_line(112, ng0);

LAB84:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB87:    goto LAB21;

LAB17:    xsi_set_current_line(123, ng0);

LAB105:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB108:    goto LAB21;

LAB19:    xsi_set_current_line(136, ng0);

LAB127:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(199, ng0);

LAB227:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t11 = (t0 + 3368);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 32);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t5, 32, t7, 32);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t10, 0, 8);
    t18 = (t12 + 4);
    t19 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = *((unsigned int *)t11);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t18);
    t17 = *((unsigned int *)t19);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB231;

LAB228:    if (t25 != 0)
        goto LAB230;

LAB229:    *((unsigned int *)t10) = 1;

LAB231:    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t10);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t28 = (t9 + 4);
    t29 = (t10 + 4);
    t48 = (t30 + 4);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    t36 = (t34 | t35);
    *((unsigned int *)t48) = t36;
    t37 = *((unsigned int *)t48);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB232;

LAB233:
LAB234:    t59 = (t0 + 3368);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng11)));
    memset(t63, 0, 8);
    xsi_vlog_signed_equal(t63, 32, t61, 32, t62, 32);
    t64 = (t0 + 2008U);
    t65 = *((char **)t64);
    t64 = ((char*)((ng4)));
    memset(t66, 0, 8);
    t67 = (t65 + 4);
    t68 = (t64 + 4);
    t69 = *((unsigned int *)t65);
    t70 = *((unsigned int *)t64);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB238;

LAB235:    if (t78 != 0)
        goto LAB237;

LAB236:    *((unsigned int *)t66) = 1;

LAB238:    t83 = *((unsigned int *)t63);
    t84 = *((unsigned int *)t66);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t63 + 4);
    t87 = (t66 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB239;

LAB240:
LAB241:    t115 = *((unsigned int *)t30);
    t116 = *((unsigned int *)t82);
    t117 = (t115 | t116);
    *((unsigned int *)t114) = t117;
    t118 = (t30 + 4);
    t119 = (t82 + 4);
    t120 = (t114 + 4);
    t121 = *((unsigned int *)t118);
    t122 = *((unsigned int *)t119);
    t123 = (t121 | t122);
    *((unsigned int *)t120) = t123;
    t124 = *((unsigned int *)t120);
    t125 = (t124 != 0);
    if (t125 == 1)
        goto LAB242;

LAB243:
LAB244:    t142 = (t0 + 3368);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    t145 = ((char*)((ng12)));
    memset(t146, 0, 8);
    xsi_vlog_signed_equal(t146, 32, t144, 32, t145, 32);
    t147 = (t0 + 2008U);
    t148 = *((char **)t147);
    t147 = ((char*)((ng5)));
    memset(t149, 0, 8);
    t150 = (t148 + 4);
    t151 = (t147 + 4);
    t152 = *((unsigned int *)t148);
    t153 = *((unsigned int *)t147);
    t154 = (t152 ^ t153);
    t155 = *((unsigned int *)t150);
    t156 = *((unsigned int *)t151);
    t157 = (t155 ^ t156);
    t158 = (t154 | t157);
    t159 = *((unsigned int *)t150);
    t160 = *((unsigned int *)t151);
    t161 = (t159 | t160);
    t162 = (~(t161));
    t163 = (t158 & t162);
    if (t163 != 0)
        goto LAB248;

LAB245:    if (t161 != 0)
        goto LAB247;

LAB246:    *((unsigned int *)t149) = 1;

LAB248:    t166 = *((unsigned int *)t146);
    t167 = *((unsigned int *)t149);
    t168 = (t166 & t167);
    *((unsigned int *)t165) = t168;
    t169 = (t146 + 4);
    t170 = (t149 + 4);
    t171 = (t165 + 4);
    t172 = *((unsigned int *)t169);
    t173 = *((unsigned int *)t170);
    t174 = (t172 | t173);
    *((unsigned int *)t171) = t174;
    t175 = *((unsigned int *)t171);
    t176 = (t175 != 0);
    if (t176 == 1)
        goto LAB249;

LAB250:
LAB251:    t198 = *((unsigned int *)t114);
    t199 = *((unsigned int *)t165);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = (t114 + 4);
    t202 = (t165 + 4);
    t203 = (t197 + 4);
    t204 = *((unsigned int *)t201);
    t205 = *((unsigned int *)t202);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = *((unsigned int *)t203);
    t208 = (t207 != 0);
    if (t208 == 1)
        goto LAB252;

LAB253:
LAB254:    t225 = (t197 + 4);
    t226 = *((unsigned int *)t225);
    t227 = (~(t226));
    t228 = *((unsigned int *)t197);
    t229 = (t228 & t227);
    t230 = (t229 != 0);
    if (t230 > 0)
        goto LAB255;

LAB256:
LAB257:    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB130:    goto LAB21;

LAB23:    *((unsigned int *)t10) = 1;
    goto LAB26;

LAB25:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB26;

LAB27:    t23 = ((char*)((ng4)));
    goto LAB28;

LAB29:    t28 = ((char*)((ng3)));
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t9, 3, t23, 3, t28, 3);
    goto LAB35;

LAB33:    memcpy(t9, t23, 8);
    goto LAB35;

LAB37:    xsi_set_current_line(84, ng0);
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    t5 = (t7 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    t22 = *((unsigned int *)t7);
    t24 = (t22 & t21);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(88, ng0);

LAB44:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB42:    goto LAB39;

LAB40:    xsi_set_current_line(84, ng0);

LAB43:    xsi_set_current_line(85, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB42;

LAB47:    xsi_set_current_line(100, ng0);
    t5 = (t0 + 2168U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t11 = (t7 + 4);
    t12 = (t5 + 4);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t5);
    t22 = (t20 ^ t21);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 ^ t25);
    t27 = (t22 | t26);
    t31 = *((unsigned int *)t11);
    t32 = *((unsigned int *)t12);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t27 & t34);
    if (t35 != 0)
        goto LAB53;

LAB50:    if (t33 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t30) = 1;

LAB53:    memset(t10, 0, 8);
    t19 = (t30 + 4);
    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t38 = *((unsigned int *)t30);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t19) != 0)
        goto LAB56;

LAB57:    t28 = (t10 + 4);
    t41 = *((unsigned int *)t10);
    t42 = *((unsigned int *)t28);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB58;

LAB59:    t44 = *((unsigned int *)t10);
    t45 = (~(t44));
    t46 = *((unsigned int *)t28);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t28) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t10) > 0)
        goto LAB64;

LAB65:    memcpy(t9, t48, 8);

LAB66:    t49 = (t0 + 3048);
    xsi_vlogvar_assign_value(t49, t9, 0, 0, 3);
    goto LAB49;

LAB52:    t18 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t10) = 1;
    goto LAB57;

LAB56:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB57;

LAB58:    t29 = ((char*)((ng6)));
    goto LAB59;

LAB60:    t48 = ((char*)((ng5)));
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t9, 3, t29, 3, t48, 3);
    goto LAB66;

LAB64:    memcpy(t9, t29, 8);
    goto LAB66;

LAB68:    xsi_set_current_line(107, ng0);
    t5 = (t0 + 3208);
    t7 = (t5 + 56U);
    t11 = *((char **)t7);
    memset(t10, 0, 8);
    t12 = (t11 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t11);
    t24 = (t22 & t21);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t12) != 0)
        goto LAB73;

LAB74:    t19 = (t10 + 4);
    t26 = *((unsigned int *)t10);
    t27 = *((unsigned int *)t19);
    t31 = (t26 || t27);
    if (t31 > 0)
        goto LAB75;

LAB76:    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t34 = *((unsigned int *)t19);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t19) > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t10) > 0)
        goto LAB81;

LAB82:    memcpy(t9, t28, 8);

LAB83:    t29 = (t0 + 3048);
    xsi_vlogvar_assign_value(t29, t9, 0, 0, 3);
    goto LAB70;

LAB71:    *((unsigned int *)t10) = 1;
    goto LAB74;

LAB73:    t18 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB74;

LAB75:    t23 = ((char*)((ng7)));
    goto LAB76;

LAB77:    t28 = ((char*)((ng6)));
    goto LAB78;

LAB79:    xsi_vlog_unsigned_bit_combine(t9, 3, t23, 3, t28, 3);
    goto LAB83;

LAB81:    memcpy(t9, t23, 8);
    goto LAB83;

LAB85:    xsi_set_current_line(113, ng0);

LAB88:    xsi_set_current_line(114, ng0);
    t5 = (t0 + 3208);
    t7 = (t5 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t11);
    t24 = (t22 & t21);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB91:    goto LAB87;

LAB89:    xsi_set_current_line(115, ng0);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t10, 0, 8);
    t18 = (t19 + 4);
    t26 = *((unsigned int *)t18);
    t27 = (~(t26));
    t31 = *((unsigned int *)t19);
    t32 = (t31 & t27);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t18) != 0)
        goto LAB94;

LAB95:    t28 = (t10 + 4);
    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t28);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB96;

LAB97:    t37 = *((unsigned int *)t10);
    t38 = (~(t37));
    t39 = *((unsigned int *)t28);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t28) > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t10) > 0)
        goto LAB102;

LAB103:    memcpy(t9, t48, 8);

LAB104:    t49 = (t0 + 3048);
    xsi_vlogvar_assign_value(t49, t9, 0, 0, 3);
    goto LAB91;

LAB92:    *((unsigned int *)t10) = 1;
    goto LAB95;

LAB94:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB95;

LAB96:    t29 = ((char*)((ng9)));
    goto LAB97;

LAB98:    t48 = ((char*)((ng8)));
    goto LAB99;

LAB100:    xsi_vlog_unsigned_bit_combine(t9, 3, t29, 3, t48, 3);
    goto LAB104;

LAB102:    memcpy(t9, t29, 8);
    goto LAB104;

LAB106:    xsi_set_current_line(124, ng0);

LAB109:    xsi_set_current_line(125, ng0);
    t5 = (t0 + 3208);
    t7 = (t5 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t11);
    t24 = (t22 & t21);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(127, ng0);

LAB126:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB112:    goto LAB108;

LAB110:    xsi_set_current_line(126, ng0);
    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t10, 0, 8);
    t18 = (t19 + 4);
    t26 = *((unsigned int *)t18);
    t27 = (~(t26));
    t31 = *((unsigned int *)t19);
    t32 = (t31 & t27);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t18) != 0)
        goto LAB115;

LAB116:    t28 = (t10 + 4);
    t34 = *((unsigned int *)t10);
    t35 = *((unsigned int *)t28);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB117;

LAB118:    t37 = *((unsigned int *)t10);
    t38 = (~(t37));
    t39 = *((unsigned int *)t28);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t28) > 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t10) > 0)
        goto LAB123;

LAB124:    memcpy(t9, t48, 8);

LAB125:    t49 = (t0 + 3048);
    xsi_vlogvar_assign_value(t49, t9, 0, 0, 3);
    goto LAB112;

LAB113:    *((unsigned int *)t10) = 1;
    goto LAB116;

LAB115:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB116;

LAB117:    t29 = ((char*)((ng9)));
    goto LAB118;

LAB119:    t48 = ((char*)((ng8)));
    goto LAB120;

LAB121:    xsi_vlog_unsigned_bit_combine(t9, 3, t29, 3, t48, 3);
    goto LAB125;

LAB123:    memcpy(t9, t29, 8);
    goto LAB125;

LAB128:    xsi_set_current_line(137, ng0);

LAB131:    xsi_set_current_line(138, ng0);
    t5 = (t0 + 3208);
    t7 = (t5 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t11);
    t24 = (t22 & t21);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB132;

LAB133:    xsi_set_current_line(185, ng0);

LAB195:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t11 = (t0 + 3368);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 32);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t5, 32, t7, 32);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t10, 0, 8);
    t18 = (t12 + 4);
    t19 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = *((unsigned int *)t11);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t18);
    t17 = *((unsigned int *)t19);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB199;

LAB196:    if (t25 != 0)
        goto LAB198;

LAB197:    *((unsigned int *)t10) = 1;

LAB199:    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t10);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t28 = (t9 + 4);
    t29 = (t10 + 4);
    t48 = (t30 + 4);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    t36 = (t34 | t35);
    *((unsigned int *)t48) = t36;
    t37 = *((unsigned int *)t48);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB200;

LAB201:
LAB202:    t59 = (t0 + 3368);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng11)));
    memset(t63, 0, 8);
    xsi_vlog_signed_equal(t63, 32, t61, 32, t62, 32);
    t64 = (t0 + 2008U);
    t65 = *((char **)t64);
    t64 = ((char*)((ng4)));
    memset(t66, 0, 8);
    t67 = (t65 + 4);
    t68 = (t64 + 4);
    t69 = *((unsigned int *)t65);
    t70 = *((unsigned int *)t64);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB206;

LAB203:    if (t78 != 0)
        goto LAB205;

LAB204:    *((unsigned int *)t66) = 1;

LAB206:    t83 = *((unsigned int *)t63);
    t84 = *((unsigned int *)t66);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t63 + 4);
    t87 = (t66 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB207;

LAB208:
LAB209:    t115 = *((unsigned int *)t30);
    t116 = *((unsigned int *)t82);
    t117 = (t115 | t116);
    *((unsigned int *)t114) = t117;
    t118 = (t30 + 4);
    t119 = (t82 + 4);
    t120 = (t114 + 4);
    t121 = *((unsigned int *)t118);
    t122 = *((unsigned int *)t119);
    t123 = (t121 | t122);
    *((unsigned int *)t120) = t123;
    t124 = *((unsigned int *)t120);
    t125 = (t124 != 0);
    if (t125 == 1)
        goto LAB210;

LAB211:
LAB212:    t142 = (t0 + 3368);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    t145 = ((char*)((ng12)));
    memset(t146, 0, 8);
    xsi_vlog_signed_equal(t146, 32, t144, 32, t145, 32);
    t147 = (t0 + 2008U);
    t148 = *((char **)t147);
    t147 = ((char*)((ng5)));
    memset(t149, 0, 8);
    t150 = (t148 + 4);
    t151 = (t147 + 4);
    t152 = *((unsigned int *)t148);
    t153 = *((unsigned int *)t147);
    t154 = (t152 ^ t153);
    t155 = *((unsigned int *)t150);
    t156 = *((unsigned int *)t151);
    t157 = (t155 ^ t156);
    t158 = (t154 | t157);
    t159 = *((unsigned int *)t150);
    t160 = *((unsigned int *)t151);
    t161 = (t159 | t160);
    t162 = (~(t161));
    t163 = (t158 & t162);
    if (t163 != 0)
        goto LAB216;

LAB213:    if (t161 != 0)
        goto LAB215;

LAB214:    *((unsigned int *)t149) = 1;

LAB216:    t166 = *((unsigned int *)t146);
    t167 = *((unsigned int *)t149);
    t168 = (t166 & t167);
    *((unsigned int *)t165) = t168;
    t169 = (t146 + 4);
    t170 = (t149 + 4);
    t171 = (t165 + 4);
    t172 = *((unsigned int *)t169);
    t173 = *((unsigned int *)t170);
    t174 = (t172 | t173);
    *((unsigned int *)t171) = t174;
    t175 = *((unsigned int *)t171);
    t176 = (t175 != 0);
    if (t176 == 1)
        goto LAB217;

LAB218:
LAB219:    t198 = *((unsigned int *)t114);
    t199 = *((unsigned int *)t165);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = (t114 + 4);
    t202 = (t165 + 4);
    t203 = (t197 + 4);
    t204 = *((unsigned int *)t201);
    t205 = *((unsigned int *)t202);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = *((unsigned int *)t203);
    t208 = (t207 != 0);
    if (t208 == 1)
        goto LAB220;

LAB221:
LAB222:    t225 = (t197 + 4);
    t226 = *((unsigned int *)t225);
    t227 = (~(t226));
    t228 = *((unsigned int *)t197);
    t229 = (t228 & t227);
    t230 = (t229 != 0);
    if (t230 > 0)
        goto LAB223;

LAB224:
LAB225:    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB134:    goto LAB130;

LAB132:    xsi_set_current_line(138, ng0);

LAB135:    xsi_set_current_line(139, ng0);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    t18 = (t19 + 4);
    t26 = *((unsigned int *)t18);
    t27 = (~(t26));
    t31 = *((unsigned int *)t19);
    t32 = (t31 & t27);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(171, ng0);

LAB163:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t11 = (t0 + 3368);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 32);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 3368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t5, 32, t7, 32);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t10, 0, 8);
    t18 = (t12 + 4);
    t19 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = *((unsigned int *)t11);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t18);
    t17 = *((unsigned int *)t19);
    t20 = (t16 ^ t17);
    t21 = (t15 | t20);
    t22 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB167;

LAB164:    if (t25 != 0)
        goto LAB166;

LAB165:    *((unsigned int *)t10) = 1;

LAB167:    t31 = *((unsigned int *)t9);
    t32 = *((unsigned int *)t10);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t28 = (t9 + 4);
    t29 = (t10 + 4);
    t48 = (t30 + 4);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    t36 = (t34 | t35);
    *((unsigned int *)t48) = t36;
    t37 = *((unsigned int *)t48);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB168;

LAB169:
LAB170:    t59 = (t0 + 3368);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng11)));
    memset(t63, 0, 8);
    xsi_vlog_signed_equal(t63, 32, t61, 32, t62, 32);
    t64 = (t0 + 2008U);
    t65 = *((char **)t64);
    t64 = ((char*)((ng4)));
    memset(t66, 0, 8);
    t67 = (t65 + 4);
    t68 = (t64 + 4);
    t69 = *((unsigned int *)t65);
    t70 = *((unsigned int *)t64);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t67);
    t73 = *((unsigned int *)t68);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t67);
    t77 = *((unsigned int *)t68);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB174;

LAB171:    if (t78 != 0)
        goto LAB173;

LAB172:    *((unsigned int *)t66) = 1;

LAB174:    t83 = *((unsigned int *)t63);
    t84 = *((unsigned int *)t66);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t63 + 4);
    t87 = (t66 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB175;

LAB176:
LAB177:    t115 = *((unsigned int *)t30);
    t116 = *((unsigned int *)t82);
    t117 = (t115 | t116);
    *((unsigned int *)t114) = t117;
    t118 = (t30 + 4);
    t119 = (t82 + 4);
    t120 = (t114 + 4);
    t121 = *((unsigned int *)t118);
    t122 = *((unsigned int *)t119);
    t123 = (t121 | t122);
    *((unsigned int *)t120) = t123;
    t124 = *((unsigned int *)t120);
    t125 = (t124 != 0);
    if (t125 == 1)
        goto LAB178;

LAB179:
LAB180:    t142 = (t0 + 3368);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    t145 = ((char*)((ng12)));
    memset(t146, 0, 8);
    xsi_vlog_signed_equal(t146, 32, t144, 32, t145, 32);
    t147 = (t0 + 2008U);
    t148 = *((char **)t147);
    t147 = ((char*)((ng5)));
    memset(t149, 0, 8);
    t150 = (t148 + 4);
    t151 = (t147 + 4);
    t152 = *((unsigned int *)t148);
    t153 = *((unsigned int *)t147);
    t154 = (t152 ^ t153);
    t155 = *((unsigned int *)t150);
    t156 = *((unsigned int *)t151);
    t157 = (t155 ^ t156);
    t158 = (t154 | t157);
    t159 = *((unsigned int *)t150);
    t160 = *((unsigned int *)t151);
    t161 = (t159 | t160);
    t162 = (~(t161));
    t163 = (t158 & t162);
    if (t163 != 0)
        goto LAB184;

LAB181:    if (t161 != 0)
        goto LAB183;

LAB182:    *((unsigned int *)t149) = 1;

LAB184:    t166 = *((unsigned int *)t146);
    t167 = *((unsigned int *)t149);
    t168 = (t166 & t167);
    *((unsigned int *)t165) = t168;
    t169 = (t146 + 4);
    t170 = (t149 + 4);
    t171 = (t165 + 4);
    t172 = *((unsigned int *)t169);
    t173 = *((unsigned int *)t170);
    t174 = (t172 | t173);
    *((unsigned int *)t171) = t174;
    t175 = *((unsigned int *)t171);
    t176 = (t175 != 0);
    if (t176 == 1)
        goto LAB185;

LAB186:
LAB187:    t198 = *((unsigned int *)t114);
    t199 = *((unsigned int *)t165);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = (t114 + 4);
    t202 = (t165 + 4);
    t203 = (t197 + 4);
    t204 = *((unsigned int *)t201);
    t205 = *((unsigned int *)t202);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = *((unsigned int *)t203);
    t208 = (t207 != 0);
    if (t208 == 1)
        goto LAB188;

LAB189:
LAB190:    t225 = (t197 + 4);
    t226 = *((unsigned int *)t225);
    t227 = (~(t226));
    t228 = *((unsigned int *)t197);
    t229 = (t228 & t227);
    t230 = (t229 != 0);
    if (t230 > 0)
        goto LAB191;

LAB192:
LAB193:    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB138:    goto LAB134;

LAB136:    xsi_set_current_line(139, ng0);

LAB139:    xsi_set_current_line(141, ng0);
    t23 = (t0 + 3368);
    t28 = (t23 + 56U);
    t29 = *((char **)t28);
    t48 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t29, 32, t48, 32);
    t49 = (t0 + 3368);
    xsi_vlogvar_assign_value(t49, t9, 0, 0, 32);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);

LAB140:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t8 == 1)
        goto LAB141;

LAB142:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t8 == 1)
        goto LAB143;

LAB144:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t8 == 1)
        goto LAB145;

LAB146:
LAB147:    goto LAB138;

LAB141:    xsi_set_current_line(145, ng0);

LAB148:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t11 = ((char*)((ng10)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t7, 32, t11, 32);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB149;

LAB150:
LAB151:    goto LAB147;

LAB143:    xsi_set_current_line(153, ng0);

LAB153:    xsi_set_current_line(154, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t11 = ((char*)((ng11)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t7, 32, t11, 32);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB154;

LAB155:
LAB156:    goto LAB147;

LAB145:    xsi_set_current_line(161, ng0);

LAB158:    xsi_set_current_line(162, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t11 = ((char*)((ng12)));
    memset(t9, 0, 8);
    xsi_vlog_signed_greatereq(t9, 32, t7, 32, t11, 32);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB159;

LAB160:
LAB161:    goto LAB147;

LAB149:    xsi_set_current_line(146, ng0);

LAB152:    xsi_set_current_line(147, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 3368);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB151;

LAB154:    xsi_set_current_line(154, ng0);

LAB157:    xsi_set_current_line(155, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 3368);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB156;

LAB159:    xsi_set_current_line(162, ng0);

LAB162:    xsi_set_current_line(163, ng0);
    t18 = ((char*)((ng1)));
    t19 = (t0 + 3368);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 32);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB161;

LAB166:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB167;

LAB168:    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t48);
    *((unsigned int *)t30) = (t39 | t40);
    t49 = (t9 + 4);
    t50 = (t10 + 4);
    t41 = *((unsigned int *)t9);
    t42 = (~(t41));
    t43 = *((unsigned int *)t49);
    t44 = (~(t43));
    t45 = *((unsigned int *)t10);
    t46 = (~(t45));
    t47 = *((unsigned int *)t50);
    t51 = (~(t47));
    t8 = (t42 & t44);
    t52 = (t46 & t51);
    t53 = (~(t8));
    t54 = (~(t52));
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & t53);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & t54);
    t57 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t57 & t53);
    t58 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t58 & t54);
    goto LAB170;

LAB173:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB174;

LAB175:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t63 + 4);
    t97 = (t66 + 4);
    t98 = *((unsigned int *)t63);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t66);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB177;

LAB178:    t126 = *((unsigned int *)t114);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t114) = (t126 | t127);
    t128 = (t30 + 4);
    t129 = (t82 + 4);
    t130 = *((unsigned int *)t128);
    t131 = (~(t130));
    t132 = *((unsigned int *)t30);
    t133 = (t132 & t131);
    t134 = *((unsigned int *)t129);
    t135 = (~(t134));
    t136 = *((unsigned int *)t82);
    t137 = (t136 & t135);
    t138 = (~(t133));
    t139 = (~(t137));
    t140 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t140 & t138);
    t141 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t141 & t139);
    goto LAB180;

LAB183:    t164 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB184;

LAB185:    t177 = *((unsigned int *)t165);
    t178 = *((unsigned int *)t171);
    *((unsigned int *)t165) = (t177 | t178);
    t179 = (t146 + 4);
    t180 = (t149 + 4);
    t181 = *((unsigned int *)t146);
    t182 = (~(t181));
    t183 = *((unsigned int *)t179);
    t184 = (~(t183));
    t185 = *((unsigned int *)t149);
    t186 = (~(t185));
    t187 = *((unsigned int *)t180);
    t188 = (~(t187));
    t189 = (t182 & t184);
    t190 = (t186 & t188);
    t191 = (~(t189));
    t192 = (~(t190));
    t193 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t193 & t191);
    t194 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t194 & t192);
    t195 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t195 & t191);
    t196 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t196 & t192);
    goto LAB187;

LAB188:    t209 = *((unsigned int *)t197);
    t210 = *((unsigned int *)t203);
    *((unsigned int *)t197) = (t209 | t210);
    t211 = (t114 + 4);
    t212 = (t165 + 4);
    t213 = *((unsigned int *)t211);
    t214 = (~(t213));
    t215 = *((unsigned int *)t114);
    t216 = (t215 & t214);
    t217 = *((unsigned int *)t212);
    t218 = (~(t217));
    t219 = *((unsigned int *)t165);
    t220 = (t219 & t218);
    t221 = (~(t216));
    t222 = (~(t220));
    t223 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t223 & t221);
    t224 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t224 & t222);
    goto LAB190;

LAB191:    xsi_set_current_line(174, ng0);

LAB194:    xsi_set_current_line(176, ng0);
    t231 = ((char*)((ng1)));
    t232 = (t0 + 3368);
    xsi_vlogvar_assign_value(t232, t231, 0, 0, 32);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB193;

LAB198:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB199;

LAB200:    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t48);
    *((unsigned int *)t30) = (t39 | t40);
    t49 = (t9 + 4);
    t50 = (t10 + 4);
    t41 = *((unsigned int *)t9);
    t42 = (~(t41));
    t43 = *((unsigned int *)t49);
    t44 = (~(t43));
    t45 = *((unsigned int *)t10);
    t46 = (~(t45));
    t47 = *((unsigned int *)t50);
    t51 = (~(t47));
    t8 = (t42 & t44);
    t52 = (t46 & t51);
    t53 = (~(t8));
    t54 = (~(t52));
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & t53);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & t54);
    t57 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t57 & t53);
    t58 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t58 & t54);
    goto LAB202;

LAB205:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB206;

LAB207:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t63 + 4);
    t97 = (t66 + 4);
    t98 = *((unsigned int *)t63);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t66);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB209;

LAB210:    t126 = *((unsigned int *)t114);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t114) = (t126 | t127);
    t128 = (t30 + 4);
    t129 = (t82 + 4);
    t130 = *((unsigned int *)t128);
    t131 = (~(t130));
    t132 = *((unsigned int *)t30);
    t133 = (t132 & t131);
    t134 = *((unsigned int *)t129);
    t135 = (~(t134));
    t136 = *((unsigned int *)t82);
    t137 = (t136 & t135);
    t138 = (~(t133));
    t139 = (~(t137));
    t140 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t140 & t138);
    t141 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t141 & t139);
    goto LAB212;

LAB215:    t164 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB216;

LAB217:    t177 = *((unsigned int *)t165);
    t178 = *((unsigned int *)t171);
    *((unsigned int *)t165) = (t177 | t178);
    t179 = (t146 + 4);
    t180 = (t149 + 4);
    t181 = *((unsigned int *)t146);
    t182 = (~(t181));
    t183 = *((unsigned int *)t179);
    t184 = (~(t183));
    t185 = *((unsigned int *)t149);
    t186 = (~(t185));
    t187 = *((unsigned int *)t180);
    t188 = (~(t187));
    t189 = (t182 & t184);
    t190 = (t186 & t188);
    t191 = (~(t189));
    t192 = (~(t190));
    t193 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t193 & t191);
    t194 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t194 & t192);
    t195 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t195 & t191);
    t196 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t196 & t192);
    goto LAB219;

LAB220:    t209 = *((unsigned int *)t197);
    t210 = *((unsigned int *)t203);
    *((unsigned int *)t197) = (t209 | t210);
    t211 = (t114 + 4);
    t212 = (t165 + 4);
    t213 = *((unsigned int *)t211);
    t214 = (~(t213));
    t215 = *((unsigned int *)t114);
    t216 = (t215 & t214);
    t217 = *((unsigned int *)t212);
    t218 = (~(t217));
    t219 = *((unsigned int *)t165);
    t220 = (t219 & t218);
    t221 = (~(t216));
    t222 = (~(t220));
    t223 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t223 & t221);
    t224 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t224 & t222);
    goto LAB222;

LAB223:    xsi_set_current_line(189, ng0);

LAB226:    xsi_set_current_line(191, ng0);
    t231 = ((char*)((ng1)));
    t232 = (t0 + 3368);
    xsi_vlogvar_assign_value(t232, t231, 0, 0, 32);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB225;

LAB230:    t23 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB231;

LAB232:    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t48);
    *((unsigned int *)t30) = (t39 | t40);
    t49 = (t9 + 4);
    t50 = (t10 + 4);
    t41 = *((unsigned int *)t9);
    t42 = (~(t41));
    t43 = *((unsigned int *)t49);
    t44 = (~(t43));
    t45 = *((unsigned int *)t10);
    t46 = (~(t45));
    t47 = *((unsigned int *)t50);
    t51 = (~(t47));
    t8 = (t42 & t44);
    t52 = (t46 & t51);
    t53 = (~(t8));
    t54 = (~(t52));
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & t53);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & t54);
    t57 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t57 & t53);
    t58 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t58 & t54);
    goto LAB234;

LAB237:    t81 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB238;

LAB239:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t63 + 4);
    t97 = (t66 + 4);
    t98 = *((unsigned int *)t63);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t66);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB241;

LAB242:    t126 = *((unsigned int *)t114);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t114) = (t126 | t127);
    t128 = (t30 + 4);
    t129 = (t82 + 4);
    t130 = *((unsigned int *)t128);
    t131 = (~(t130));
    t132 = *((unsigned int *)t30);
    t133 = (t132 & t131);
    t134 = *((unsigned int *)t129);
    t135 = (~(t134));
    t136 = *((unsigned int *)t82);
    t137 = (t136 & t135);
    t138 = (~(t133));
    t139 = (~(t137));
    t140 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t140 & t138);
    t141 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t141 & t139);
    goto LAB244;

LAB247:    t164 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB248;

LAB249:    t177 = *((unsigned int *)t165);
    t178 = *((unsigned int *)t171);
    *((unsigned int *)t165) = (t177 | t178);
    t179 = (t146 + 4);
    t180 = (t149 + 4);
    t181 = *((unsigned int *)t146);
    t182 = (~(t181));
    t183 = *((unsigned int *)t179);
    t184 = (~(t183));
    t185 = *((unsigned int *)t149);
    t186 = (~(t185));
    t187 = *((unsigned int *)t180);
    t188 = (~(t187));
    t189 = (t182 & t184);
    t190 = (t186 & t188);
    t191 = (~(t189));
    t192 = (~(t190));
    t193 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t193 & t191);
    t194 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t194 & t192);
    t195 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t195 & t191);
    t196 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t196 & t192);
    goto LAB251;

LAB252:    t209 = *((unsigned int *)t197);
    t210 = *((unsigned int *)t203);
    *((unsigned int *)t197) = (t209 | t210);
    t211 = (t114 + 4);
    t212 = (t165 + 4);
    t213 = *((unsigned int *)t211);
    t214 = (~(t213));
    t215 = *((unsigned int *)t114);
    t216 = (t215 & t214);
    t217 = *((unsigned int *)t212);
    t218 = (~(t217));
    t219 = *((unsigned int *)t165);
    t220 = (t219 & t218);
    t221 = (~(t216));
    t222 = (~(t220));
    t223 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t223 & t221);
    t224 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t224 & t222);
    goto LAB254;

LAB255:    xsi_set_current_line(203, ng0);

LAB258:    xsi_set_current_line(205, ng0);
    t231 = ((char*)((ng1)));
    t232 = (t0 + 3368);
    xsi_vlogvar_assign_value(t232, t231, 0, 0, 32);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB257;

}

static void NetReassign_68_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t3 = 0;
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 7472);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 5400);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 2888);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 3, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 5400);
    *((int *)t8) = 1;
    goto LAB8;

}


extern void work_m_00000000000617672396_1116883833_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_53_1,(void *)Always_74_2,(void *)NetReassign_68_3};
	xsi_register_didat("work_m_00000000000617672396_1116883833", "isim/Maquina_de_cafe_Maquina_de_cafe_sch_tb_isim_beh.exe.sim/work/m_00000000000617672396_1116883833.didat");
	xsi_register_executes(pe);
}
