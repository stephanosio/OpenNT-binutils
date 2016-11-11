/* This file is automatically generated by aarch64-gen.  Do not edit!  */
/* Copyright (C) 2012-2016 Free Software Foundation, Inc.
   Contributed by ARM Ltd.

   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

#include "sysdep.h"
#include "aarch64-asm.h"


const aarch64_opcode *
aarch64_find_real_opcode (const aarch64_opcode *opcode)
{
  /* Use the index as the key to locate the real opcode.  */
  int key = opcode - aarch64_opcode_table;
  int value;
  switch (key)
    {
    case 3:	/* ngc */
    case 2:	/* sbc */
      value = 2;	/* --> sbc.  */
      break;
    case 5:	/* ngcs */
    case 4:	/* sbcs */
      value = 4;	/* --> sbcs.  */
      break;
    case 8:	/* cmn */
    case 7:	/* adds */
      value = 7;	/* --> adds.  */
      break;
    case 11:	/* cmp */
    case 10:	/* subs */
      value = 10;	/* --> subs.  */
      break;
    case 13:	/* mov */
    case 12:	/* add */
      value = 12;	/* --> add.  */
      break;
    case 15:	/* cmn */
    case 14:	/* adds */
      value = 14;	/* --> adds.  */
      break;
    case 18:	/* cmp */
    case 17:	/* subs */
      value = 17;	/* --> subs.  */
      break;
    case 21:	/* cmn */
    case 20:	/* adds */
      value = 20;	/* --> adds.  */
      break;
    case 23:	/* neg */
    case 22:	/* sub */
      value = 22;	/* --> sub.  */
      break;
    case 26:	/* negs */
    case 25:	/* cmp */
    case 24:	/* subs */
      value = 24;	/* --> subs.  */
      break;
    case 150:	/* mov */
    case 149:	/* umov */
      value = 149;	/* --> umov.  */
      break;
    case 152:	/* mov */
    case 151:	/* ins */
      value = 151;	/* --> ins.  */
      break;
    case 154:	/* mov */
    case 153:	/* ins */
      value = 153;	/* --> ins.  */
      break;
    case 236:	/* mvn */
    case 235:	/* not */
      value = 235;	/* --> not.  */
      break;
    case 311:	/* mov */
    case 310:	/* orr */
      value = 310;	/* --> orr.  */
      break;
    case 380:	/* sxtl */
    case 379:	/* sshll */
      value = 379;	/* --> sshll.  */
      break;
    case 382:	/* sxtl2 */
    case 381:	/* sshll2 */
      value = 381;	/* --> sshll2.  */
      break;
    case 404:	/* uxtl */
    case 403:	/* ushll */
      value = 403;	/* --> ushll.  */
      break;
    case 406:	/* uxtl2 */
    case 405:	/* ushll2 */
      value = 405;	/* --> ushll2.  */
      break;
    case 527:	/* mov */
    case 526:	/* dup */
      value = 526;	/* --> dup.  */
      break;
    case 614:	/* sxtw */
    case 613:	/* sxth */
    case 612:	/* sxtb */
    case 615:	/* asr */
    case 611:	/* sbfx */
    case 610:	/* sbfiz */
    case 609:	/* sbfm */
      value = 609;	/* --> sbfm.  */
      break;
    case 618:	/* bfc */
    case 619:	/* bfxil */
    case 617:	/* bfi */
    case 616:	/* bfm */
      value = 616;	/* --> bfm.  */
      break;
    case 624:	/* uxth */
    case 623:	/* uxtb */
    case 626:	/* lsr */
    case 625:	/* lsl */
    case 622:	/* ubfx */
    case 621:	/* ubfiz */
    case 620:	/* ubfm */
      value = 620;	/* --> ubfm.  */
      break;
    case 644:	/* cset */
    case 643:	/* cinc */
    case 642:	/* csinc */
      value = 642;	/* --> csinc.  */
      break;
    case 647:	/* csetm */
    case 646:	/* cinv */
    case 645:	/* csinv */
      value = 645;	/* --> csinv.  */
      break;
    case 649:	/* cneg */
    case 648:	/* csneg */
      value = 648;	/* --> csneg.  */
      break;
    case 667:	/* rev */
    case 668:	/* rev64 */
      value = 667;	/* --> rev.  */
      break;
    case 693:	/* lsl */
    case 692:	/* lslv */
      value = 692;	/* --> lslv.  */
      break;
    case 695:	/* lsr */
    case 694:	/* lsrv */
      value = 694;	/* --> lsrv.  */
      break;
    case 697:	/* asr */
    case 696:	/* asrv */
      value = 696;	/* --> asrv.  */
      break;
    case 699:	/* ror */
    case 698:	/* rorv */
      value = 698;	/* --> rorv.  */
      break;
    case 709:	/* mul */
    case 708:	/* madd */
      value = 708;	/* --> madd.  */
      break;
    case 711:	/* mneg */
    case 710:	/* msub */
      value = 710;	/* --> msub.  */
      break;
    case 713:	/* smull */
    case 712:	/* smaddl */
      value = 712;	/* --> smaddl.  */
      break;
    case 715:	/* smnegl */
    case 714:	/* smsubl */
      value = 714;	/* --> smsubl.  */
      break;
    case 718:	/* umull */
    case 717:	/* umaddl */
      value = 717;	/* --> umaddl.  */
      break;
    case 720:	/* umnegl */
    case 719:	/* umsubl */
      value = 719;	/* --> umsubl.  */
      break;
    case 731:	/* ror */
    case 730:	/* extr */
      value = 730;	/* --> extr.  */
      break;
    case 938:	/* bic */
    case 937:	/* and */
      value = 937;	/* --> and.  */
      break;
    case 940:	/* mov */
    case 939:	/* orr */
      value = 939;	/* --> orr.  */
      break;
    case 943:	/* tst */
    case 942:	/* ands */
      value = 942;	/* --> ands.  */
      break;
    case 948:	/* uxtw */
    case 947:	/* mov */
    case 946:	/* orr */
      value = 946;	/* --> orr.  */
      break;
    case 950:	/* mvn */
    case 949:	/* orn */
      value = 949;	/* --> orn.  */
      break;
    case 954:	/* tst */
    case 953:	/* ands */
      value = 953;	/* --> ands.  */
      break;
    case 1080:	/* staddb */
    case 984:	/* ldaddb */
      value = 984;	/* --> ldaddb.  */
      break;
    case 1081:	/* staddh */
    case 985:	/* ldaddh */
      value = 985;	/* --> ldaddh.  */
      break;
    case 1082:	/* stadd */
    case 986:	/* ldadd */
      value = 986;	/* --> ldadd.  */
      break;
    case 1083:	/* staddlb */
    case 988:	/* ldaddlb */
      value = 988;	/* --> ldaddlb.  */
      break;
    case 1084:	/* staddlh */
    case 991:	/* ldaddlh */
      value = 991;	/* --> ldaddlh.  */
      break;
    case 1085:	/* staddl */
    case 994:	/* ldaddl */
      value = 994;	/* --> ldaddl.  */
      break;
    case 1086:	/* stclrb */
    case 996:	/* ldclrb */
      value = 996;	/* --> ldclrb.  */
      break;
    case 1087:	/* stclrh */
    case 997:	/* ldclrh */
      value = 997;	/* --> ldclrh.  */
      break;
    case 1088:	/* stclr */
    case 998:	/* ldclr */
      value = 998;	/* --> ldclr.  */
      break;
    case 1089:	/* stclrlb */
    case 1000:	/* ldclrlb */
      value = 1000;	/* --> ldclrlb.  */
      break;
    case 1090:	/* stclrlh */
    case 1003:	/* ldclrlh */
      value = 1003;	/* --> ldclrlh.  */
      break;
    case 1091:	/* stclrl */
    case 1006:	/* ldclrl */
      value = 1006;	/* --> ldclrl.  */
      break;
    case 1092:	/* steorb */
    case 1008:	/* ldeorb */
      value = 1008;	/* --> ldeorb.  */
      break;
    case 1093:	/* steorh */
    case 1009:	/* ldeorh */
      value = 1009;	/* --> ldeorh.  */
      break;
    case 1094:	/* steor */
    case 1010:	/* ldeor */
      value = 1010;	/* --> ldeor.  */
      break;
    case 1095:	/* steorlb */
    case 1012:	/* ldeorlb */
      value = 1012;	/* --> ldeorlb.  */
      break;
    case 1096:	/* steorlh */
    case 1015:	/* ldeorlh */
      value = 1015;	/* --> ldeorlh.  */
      break;
    case 1097:	/* steorl */
    case 1018:	/* ldeorl */
      value = 1018;	/* --> ldeorl.  */
      break;
    case 1098:	/* stsetb */
    case 1020:	/* ldsetb */
      value = 1020;	/* --> ldsetb.  */
      break;
    case 1099:	/* stseth */
    case 1021:	/* ldseth */
      value = 1021;	/* --> ldseth.  */
      break;
    case 1100:	/* stset */
    case 1022:	/* ldset */
      value = 1022;	/* --> ldset.  */
      break;
    case 1101:	/* stsetlb */
    case 1024:	/* ldsetlb */
      value = 1024;	/* --> ldsetlb.  */
      break;
    case 1102:	/* stsetlh */
    case 1027:	/* ldsetlh */
      value = 1027;	/* --> ldsetlh.  */
      break;
    case 1103:	/* stsetl */
    case 1030:	/* ldsetl */
      value = 1030;	/* --> ldsetl.  */
      break;
    case 1104:	/* stsmaxb */
    case 1032:	/* ldsmaxb */
      value = 1032;	/* --> ldsmaxb.  */
      break;
    case 1105:	/* stsmaxh */
    case 1033:	/* ldsmaxh */
      value = 1033;	/* --> ldsmaxh.  */
      break;
    case 1106:	/* stsmax */
    case 1034:	/* ldsmax */
      value = 1034;	/* --> ldsmax.  */
      break;
    case 1107:	/* stsmaxlb */
    case 1036:	/* ldsmaxlb */
      value = 1036;	/* --> ldsmaxlb.  */
      break;
    case 1108:	/* stsmaxlh */
    case 1039:	/* ldsmaxlh */
      value = 1039;	/* --> ldsmaxlh.  */
      break;
    case 1109:	/* stsmaxl */
    case 1042:	/* ldsmaxl */
      value = 1042;	/* --> ldsmaxl.  */
      break;
    case 1110:	/* stsminb */
    case 1044:	/* ldsminb */
      value = 1044;	/* --> ldsminb.  */
      break;
    case 1111:	/* stsminh */
    case 1045:	/* ldsminh */
      value = 1045;	/* --> ldsminh.  */
      break;
    case 1112:	/* stsmin */
    case 1046:	/* ldsmin */
      value = 1046;	/* --> ldsmin.  */
      break;
    case 1113:	/* stsminlb */
    case 1048:	/* ldsminlb */
      value = 1048;	/* --> ldsminlb.  */
      break;
    case 1114:	/* stsminlh */
    case 1051:	/* ldsminlh */
      value = 1051;	/* --> ldsminlh.  */
      break;
    case 1115:	/* stsminl */
    case 1054:	/* ldsminl */
      value = 1054;	/* --> ldsminl.  */
      break;
    case 1116:	/* stumaxb */
    case 1056:	/* ldumaxb */
      value = 1056;	/* --> ldumaxb.  */
      break;
    case 1117:	/* stumaxh */
    case 1057:	/* ldumaxh */
      value = 1057;	/* --> ldumaxh.  */
      break;
    case 1118:	/* stumax */
    case 1058:	/* ldumax */
      value = 1058;	/* --> ldumax.  */
      break;
    case 1119:	/* stumaxlb */
    case 1060:	/* ldumaxlb */
      value = 1060;	/* --> ldumaxlb.  */
      break;
    case 1120:	/* stumaxlh */
    case 1063:	/* ldumaxlh */
      value = 1063;	/* --> ldumaxlh.  */
      break;
    case 1121:	/* stumaxl */
    case 1066:	/* ldumaxl */
      value = 1066;	/* --> ldumaxl.  */
      break;
    case 1122:	/* stuminb */
    case 1068:	/* lduminb */
      value = 1068;	/* --> lduminb.  */
      break;
    case 1123:	/* stuminh */
    case 1069:	/* lduminh */
      value = 1069;	/* --> lduminh.  */
      break;
    case 1124:	/* stumin */
    case 1070:	/* ldumin */
      value = 1070;	/* --> ldumin.  */
      break;
    case 1125:	/* stuminlb */
    case 1072:	/* lduminlb */
      value = 1072;	/* --> lduminlb.  */
      break;
    case 1126:	/* stuminlh */
    case 1075:	/* lduminlh */
      value = 1075;	/* --> lduminlh.  */
      break;
    case 1127:	/* stuminl */
    case 1078:	/* lduminl */
      value = 1078;	/* --> lduminl.  */
      break;
    case 1129:	/* mov */
    case 1128:	/* movn */
      value = 1128;	/* --> movn.  */
      break;
    case 1131:	/* mov */
    case 1130:	/* movz */
      value = 1130;	/* --> movz.  */
      break;
    case 1169:	/* autibsp */
    case 1168:	/* autibz */
    case 1167:	/* autiasp */
    case 1166:	/* autiaz */
    case 1165:	/* pacibsp */
    case 1164:	/* pacibz */
    case 1163:	/* paciasp */
    case 1162:	/* paciaz */
    case 1149:	/* psb */
    case 1148:	/* esb */
    case 1147:	/* autib1716 */
    case 1146:	/* autia1716 */
    case 1145:	/* pacib1716 */
    case 1144:	/* pacia1716 */
    case 1143:	/* xpaclri */
    case 1142:	/* sevl */
    case 1141:	/* sev */
    case 1140:	/* wfi */
    case 1139:	/* wfe */
    case 1138:	/* yield */
    case 1137:	/* nop */
    case 1136:	/* hint */
      value = 1136;	/* --> hint.  */
      break;
    case 1158:	/* tlbi */
    case 1157:	/* ic */
    case 1156:	/* dc */
    case 1155:	/* at */
    case 1154:	/* sys */
      value = 1154;	/* --> sys.  */
      break;
    case 1912:	/* bic */
    case 1217:	/* and */
      value = 1217;	/* --> and.  */
      break;
    case 1200:	/* mov */
    case 1219:	/* and */
      value = 1219;	/* --> and.  */
      break;
    case 1204:	/* movs */
    case 1220:	/* ands */
      value = 1220;	/* --> ands.  */
      break;
    case 1913:	/* cmple */
    case 1255:	/* cmpge */
      value = 1255;	/* --> cmpge.  */
      break;
    case 1916:	/* cmplt */
    case 1258:	/* cmpgt */
      value = 1258;	/* --> cmpgt.  */
      break;
    case 1914:	/* cmplo */
    case 1260:	/* cmphi */
      value = 1260;	/* --> cmphi.  */
      break;
    case 1915:	/* cmpls */
    case 1263:	/* cmphs */
      value = 1263;	/* --> cmphs.  */
      break;
    case 1197:	/* mov */
    case 1285:	/* cpy */
      value = 1285;	/* --> cpy.  */
      break;
    case 1199:	/* mov */
    case 1286:	/* cpy */
      value = 1286;	/* --> cpy.  */
      break;
    case 1923:	/* fmov */
    case 1202:	/* mov */
    case 1287:	/* cpy */
      value = 1287;	/* --> cpy.  */
      break;
    case 1192:	/* mov */
    case 1299:	/* dup */
      value = 1299;	/* --> dup.  */
      break;
    case 1194:	/* mov */
    case 1191:	/* mov */
    case 1300:	/* dup */
      value = 1300;	/* --> dup.  */
      break;
    case 1922:	/* fmov */
    case 1196:	/* mov */
    case 1301:	/* dup */
      value = 1301;	/* --> dup.  */
      break;
    case 1195:	/* mov */
    case 1302:	/* dupm */
      value = 1302;	/* --> dupm.  */
      break;
    case 1917:	/* eon */
    case 1304:	/* eor */
      value = 1304;	/* --> eor.  */
      break;
    case 1205:	/* not */
    case 1306:	/* eor */
      value = 1306;	/* --> eor.  */
      break;
    case 1206:	/* nots */
    case 1307:	/* eors */
      value = 1307;	/* --> eors.  */
      break;
    case 1918:	/* facle */
    case 1312:	/* facge */
      value = 1312;	/* --> facge.  */
      break;
    case 1919:	/* faclt */
    case 1313:	/* facgt */
      value = 1313;	/* --> facgt.  */
      break;
    case 1920:	/* fcmle */
    case 1322:	/* fcmge */
      value = 1322;	/* --> fcmge.  */
      break;
    case 1921:	/* fcmlt */
    case 1324:	/* fcmgt */
      value = 1324;	/* --> fcmgt.  */
      break;
    case 1189:	/* fmov */
    case 1330:	/* fcpy */
      value = 1330;	/* --> fcpy.  */
      break;
    case 1188:	/* fmov */
    case 1347:	/* fdup */
      value = 1347;	/* --> fdup.  */
      break;
    case 1190:	/* mov */
    case 1645:	/* orr */
      value = 1645;	/* --> orr.  */
      break;
    case 1924:	/* orn */
    case 1646:	/* orr */
      value = 1646;	/* --> orr.  */
      break;
    case 1193:	/* mov */
    case 1648:	/* orr */
      value = 1648;	/* --> orr.  */
      break;
    case 1203:	/* movs */
    case 1649:	/* orrs */
      value = 1649;	/* --> orrs.  */
      break;
    case 1198:	/* mov */
    case 1705:	/* sel */
      value = 1705;	/* --> sel.  */
      break;
    case 1201:	/* mov */
    case 1706:	/* sel */
      value = 1706;	/* --> sel.  */
      break;
    default: return NULL;
    }

  return aarch64_opcode_table + value;
}

const char*
aarch64_insert_operand (const aarch64_operand *self,
			   const aarch64_opnd_info *info,
			   aarch64_insn *code, const aarch64_inst *inst)
{
  /* Use the index as the key.  */
  int key = self - aarch64_operands;
  switch (key)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 14:
    case 15:
    case 16:
    case 17:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 35:
    case 36:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 173:
      return aarch64_ins_regno (self, info, code, inst);
    case 12:
      return aarch64_ins_reg_extended (self, info, code, inst);
    case 13:
      return aarch64_ins_reg_shifted (self, info, code, inst);
    case 18:
      return aarch64_ins_ft (self, info, code, inst);
    case 28:
    case 29:
    case 30:
      return aarch64_ins_reglane (self, info, code, inst);
    case 31:
      return aarch64_ins_reglist (self, info, code, inst);
    case 32:
      return aarch64_ins_ldst_reglist (self, info, code, inst);
    case 33:
      return aarch64_ins_ldst_reglist_r (self, info, code, inst);
    case 34:
      return aarch64_ins_ldst_elemlist (self, info, code, inst);
    case 37:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 68:
    case 69:
    case 70:
    case 71:
    case 136:
    case 138:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 159:
    case 160:
      return aarch64_ins_imm (self, info, code, inst);
    case 38:
    case 39:
      return aarch64_ins_advsimd_imm_shift (self, info, code, inst);
    case 40:
    case 41:
    case 42:
      return aarch64_ins_advsimd_imm_modified (self, info, code, inst);
    case 46:
    case 129:
      return aarch64_ins_fpimm (self, info, code, inst);
    case 60:
    case 134:
      return aarch64_ins_limm (self, info, code, inst);
    case 61:
      return aarch64_ins_aimm (self, info, code, inst);
    case 62:
      return aarch64_ins_imm_half (self, info, code, inst);
    case 63:
      return aarch64_ins_fbits (self, info, code, inst);
    case 65:
    case 66:
      return aarch64_ins_cond (self, info, code, inst);
    case 72:
    case 78:
      return aarch64_ins_addr_simple (self, info, code, inst);
    case 73:
      return aarch64_ins_addr_regoff (self, info, code, inst);
    case 74:
    case 75:
    case 76:
      return aarch64_ins_addr_simm (self, info, code, inst);
    case 77:
      return aarch64_ins_addr_uimm12 (self, info, code, inst);
    case 79:
      return aarch64_ins_simd_addr_post (self, info, code, inst);
    case 80:
      return aarch64_ins_sysreg (self, info, code, inst);
    case 81:
      return aarch64_ins_pstatefield (self, info, code, inst);
    case 82:
    case 83:
    case 84:
    case 85:
      return aarch64_ins_sysins_op (self, info, code, inst);
    case 86:
    case 87:
      return aarch64_ins_barrier (self, info, code, inst);
    case 88:
      return aarch64_ins_prfop (self, info, code, inst);
    case 89:
      return aarch64_ins_hint (self, info, code, inst);
    case 90:
    case 91:
    case 92:
    case 93:
      return aarch64_ins_sve_addr_ri_s4xvl (self, info, code, inst);
    case 94:
      return aarch64_ins_sve_addr_ri_s6xvl (self, info, code, inst);
    case 95:
      return aarch64_ins_sve_addr_ri_s9xvl (self, info, code, inst);
    case 96:
    case 97:
    case 98:
    case 99:
      return aarch64_ins_sve_addr_ri_u6 (self, info, code, inst);
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
      return aarch64_ins_sve_addr_rr_lsl (self, info, code, inst);
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
      return aarch64_ins_sve_addr_rz_xtw (self, info, code, inst);
    case 120:
    case 121:
    case 122:
    case 123:
      return aarch64_ins_sve_addr_zi_u5 (self, info, code, inst);
    case 124:
      return aarch64_ins_sve_addr_zz_lsl (self, info, code, inst);
    case 125:
      return aarch64_ins_sve_addr_zz_sxtw (self, info, code, inst);
    case 126:
      return aarch64_ins_sve_addr_zz_uxtw (self, info, code, inst);
    case 127:
      return aarch64_ins_sve_aimm (self, info, code, inst);
    case 128:
      return aarch64_ins_sve_asimm (self, info, code, inst);
    case 130:
      return aarch64_ins_sve_float_half_one (self, info, code, inst);
    case 131:
      return aarch64_ins_sve_float_half_two (self, info, code, inst);
    case 132:
      return aarch64_ins_sve_float_zero_one (self, info, code, inst);
    case 133:
      return aarch64_ins_inv_limm (self, info, code, inst);
    case 135:
      return aarch64_ins_sve_limm_mov (self, info, code, inst);
    case 137:
      return aarch64_ins_sve_scale (self, info, code, inst);
    case 149:
    case 150:
      return aarch64_ins_sve_shlimm (self, info, code, inst);
    case 151:
    case 152:
      return aarch64_ins_sve_shrimm (self, info, code, inst);
    case 171:
      return aarch64_ins_sve_index (self, info, code, inst);
    case 172:
    case 174:
      return aarch64_ins_sve_reglist (self, info, code, inst);
    default: assert (0); abort ();
    }
}
