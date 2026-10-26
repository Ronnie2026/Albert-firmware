/* Firmware entry: 0x481860f2 */

int FUN_ram_481860f2(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,undefined4 param_7,uint param_8,
                    undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_104;
  uint uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 auStack_f0 [4];
  int iStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [12];
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  int iStack_bc;
  int iStack_b8;
  undefined1 auStack_b4 [32];
  int aiStack_94 [8];
  undefined1 auStack_74 [72];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_fc = param_1[2];
  uStack_f8 = 5;
  uStack_104 = 0;
  uStack_100 = 0;
  iVar1 = iStack_fc + param_1[1];
  if (*param_1 != 0x30) {
    return -0x2f62;
  }
  iVar2 = FUN_ram_4817f8f8(&iStack_fc,iVar1,auStack_f0,&iStack_d8);
  if (iVar2 != 0) {
    return iVar2 + -0x2f00;
  }
  if (iStack_ec != 9) {
    return -0x2e80;
  }
  iVar2 = FUN_ram_4ff4511a(&DAT_ram_481e004c,uStack_e8);
  if (iVar2 != 0) {
    return -0x2e80;
  }
  aiStack_94[0] = iStack_d0;
  iVar2 = iStack_d0 + iStack_d4;
  if (iStack_d8 != 0x30) {
    return -0x2f62;
  }
  iVar3 = FUN_ram_4817f40e(aiStack_94,iVar2,&iStack_bc,4);
  if (iVar3 == 0) {
    iStack_b8 = aiStack_94[0];
    aiStack_94[0] = iStack_bc + aiStack_94[0];
    iVar3 = FUN_ram_4817f55c(aiStack_94,iVar2,&uStack_104);
    if (iVar3 != 0) goto LAB_ram_48186184;
    if (iVar2 != aiStack_94[0]) {
      iVar3 = FUN_ram_4817f55c(aiStack_94,iVar2,&uStack_100);
      if ((iVar3 != 0) && (iVar3 != -0x62)) goto LAB_ram_48186184;
      if (iVar2 != aiStack_94[0]) {
        iVar3 = FUN_ram_4817fa0c(aiStack_94,iVar2,auStack_74);
        if (iVar3 != 0) goto LAB_ram_48186184;
        iVar3 = FUN_ram_481852d2(auStack_74,&uStack_f8);
        if (iVar3 != 0) {
          return -0x2e80;
        }
        if (iVar2 != aiStack_94[0]) {
          return -0x2f66;
        }
      }
    }
  }
  else {
LAB_ram_48186184:
    if (iVar3 + -0x2f00 != 0) {
      return iVar3 + -0x2f00;
    }
  }
  iVar1 = FUN_ram_4817f8f8(&iStack_fc,iVar1,auStack_e4,&iStack_cc);
  if (iVar1 != 0) {
    return iVar1 + -0x2f00;
  }
  iVar1 = FUN_ram_481851c8(auStack_e4,&uStack_f4);
  if ((iVar1 != 0) || (iVar1 = FUN_ram_4817189a(uStack_f4), iVar1 == 0)) {
    return -0x2e80;
  }
  uVar4 = *(uint *)(iVar1 + 4);
  uStack_100 = uVar4 >> 5 & 0x78;
  if ((iStack_cc != 4) || (uStack_c8 != (uVar4 >> 3 & 0x1c))) {
    return -0x2f00;
  }
  uVar5 = param_6;
  if (param_2 != 0) {
    if (param_2 != 1) goto LAB_ram_48186294;
    uVar5 = ((uVar4 & 0x1f) + param_6) - param_6 % (uVar4 & 0x1f);
  }
  if (param_8 < uVar5) {
    return -0x6c;
  }
LAB_ram_48186294:
  FUN_ram_4817190e(auStack_74);
  FUN_ram_4ff45158(aiStack_94,uStack_c4,uStack_c8);
  iVar2 = FUN_ram_48185f60(uStack_f8,param_3,param_4,iStack_b8,iStack_bc,uStack_104,uStack_100,
                           auStack_b4);
  if ((((iVar2 == 0) && (iVar2 = FUN_ram_48171962(auStack_74,iVar1), iVar2 == 0)) &&
      (iVar2 = FUN_ram_481719ba(auStack_74,auStack_b4,uStack_100 << 3,param_2), iVar2 == 0)) &&
     (iVar2 = FUN_ram_48171fce(auStack_74,0), iVar2 == 0)) {
    iVar1 = FUN_ram_48172078(auStack_74,aiStack_94,uStack_c8,param_5,param_6,param_7,param_9);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = -0x2e00;
    }
  }
  FUN_ram_4817191c(auStack_74);
  return iVar2;
}


