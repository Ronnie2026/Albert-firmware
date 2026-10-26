/* Firmware entry: 0x48177bba */

int FUN_ram_48177bba(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbStack_f8;
  int iStack_f4;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [8];
  undefined1 auStack_e4 [8];
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [8];
  undefined1 auStack_bc [8];
  int iStack_b4;
  int iStack_b0;
  int iStack_90;
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [8];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  int iStack_54;
  int iStack_50;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 == 6) {
    iVar2 = FUN_ram_48185114(param_1,&iStack_f4);
    if (iVar2 != 0) {
      return -0x3a00;
    }
    goto LAB_ram_48177dc8;
  }
  FUN_ram_48173f5c(auStack_f0);
  pbStack_f8 = (byte *)param_1[2];
  pbVar5 = pbStack_f8 + param_1[1];
  iVar2 = FUN_ram_4817f55c(&pbStack_f8,pbVar5,&iStack_90);
  if (iVar2 != 0) {
    iVar2 = iVar2 + -0x3d00;
    goto LAB_ram_48177c7e;
  }
  if (2 < iStack_90 - 1U) {
LAB_ram_48177f4a:
    iVar2 = -0x3d00;
    goto LAB_ram_48177d88;
  }
  iVar2 = FUN_ram_4817f40e(&pbStack_f8,pbVar5,&iStack_f4,0x30);
  if (iVar2 != 0) goto LAB_ram_48177d88;
  pbVar6 = pbStack_f8 + iStack_f4;
  iVar2 = FUN_ram_4817f40e(&pbStack_f8,pbVar6,&iStack_f4,6);
  pbVar7 = pbStack_f8;
  if (iVar2 != 0) goto LAB_ram_48177d88;
  if ((iStack_f4 != 7) || (iVar2 = FUN_ram_4ff4511a(pbStack_f8,&DAT_ram_481dee4c), iVar2 != 0)) {
    iVar2 = -0x3980;
    goto LAB_ram_48177d88;
  }
  pbStack_f8 = pbVar7 + 7;
  iVar2 = FUN_ram_4817f564(&pbStack_f8,pbVar6,auStack_ec);
  if (iVar2 == 0) {
    iStack_b4 = FUN_ram_4818006c(auStack_ec);
    if (pbVar6 != pbStack_f8) {
LAB_ram_48177f78:
      iVar2 = -0x3d66;
      goto LAB_ram_48177d88;
    }
    iVar2 = FUN_ram_4817f40e(&pbStack_f8,pbVar5,&iStack_f4,0x30);
    if (iVar2 != 0) goto LAB_ram_48177d88;
    pbVar7 = pbStack_f8 + iStack_f4;
    iVar2 = FUN_ram_4817f40e(&pbStack_f8,pbVar7,&iStack_f4,4);
    if ((iVar2 != 0) || (iVar2 = FUN_ram_481800da(auStack_e4,pbStack_f8,iStack_f4), iVar2 != 0)) {
      iVar2 = iVar2 + -0x3d00;
      goto LAB_ram_48177c7e;
    }
    pbStack_f8 = pbStack_f8 + iStack_f4;
    iVar2 = FUN_ram_4817f40e(&pbStack_f8,pbVar7,&iStack_f4,4);
    if ((iVar2 != 0) || (iVar2 = FUN_ram_481800da(auStack_dc,pbStack_f8,iStack_f4), iVar2 != 0)) {
LAB_ram_48177f56:
      iVar2 = iVar2 + -0x3d00;
      goto LAB_ram_48177c7e;
    }
    pbStack_f8 = pbStack_f8 + iStack_f4;
    iVar2 = FUN_ram_4817f40e(&pbStack_f8,pbVar7,&iStack_f4,3);
    if (iVar2 == 0) {
      pbStack_f8 = pbStack_f8 + iStack_f4;
    }
    if (pbVar7 != pbStack_f8) goto LAB_ram_48177f78;
    iVar2 = FUN_ram_4817f40e(&pbStack_f8,pbVar5,&iStack_f4,4);
    if (iVar2 != 0) goto LAB_ram_48177f56;
    iVar2 = FUN_ram_48174256(auStack_f0,auStack_d4,pbStack_f8,iStack_f4);
    if ((iVar2 != 0) &&
       ((((iVar2 != -0x4e80 || (1 < (byte)(*pbStack_f8 - 2))) ||
         (iVar2 = FUN_ram_48180076(auStack_ec), iVar2 + 1 != iStack_f4)) ||
        (((iVar2 = FUN_ram_481800da(auStack_d4,pbStack_f8 + 1,iVar2), iVar2 != 0 ||
          (iVar2 = FUN_ram_4817ff24(auStack_cc,*pbStack_f8 - 2), iVar2 != 0)) ||
         (iVar2 = FUN_ram_4817ff24(auStack_c4,1), iVar2 != 0)))))) goto LAB_ram_48177f4a;
    pbStack_f8 = pbStack_f8 + iStack_f4;
    iVar2 = FUN_ram_4817f564(&pbStack_f8,pbVar5,auStack_bc);
    if (iVar2 != 0) {
      iVar2 = iVar2 + -0x3d00;
      goto LAB_ram_48177c7e;
    }
    iStack_b0 = FUN_ram_4818006c(auStack_bc);
  }
  else {
    iVar2 = iVar2 + -0x3d00;
LAB_ram_48177c7e:
    if (iVar2 != 0) goto LAB_ram_48177d88;
  }
  FUN_ram_48173f5c(&iStack_90);
  piVar3 = (int *)FUN_ram_48173ee4();
  iVar2 = *piVar3;
  while (iVar2 != 0) {
    FUN_ram_48174022(&iStack_90);
    iVar2 = FUN_ram_48176468(&iStack_90,*piVar3);
    if (iVar2 != 0) {
      FUN_ram_48174022(&iStack_90);
      iStack_f4 = *piVar3;
      goto LAB_ram_48177d88;
    }
    if (((iStack_b4 == iStack_54) && (iStack_b0 == iStack_50)) &&
       ((iVar2 = FUN_ram_4818023e(auStack_ec,auStack_8c), iVar2 == 0 &&
        ((((iVar2 = FUN_ram_4818023e(auStack_e4,auStack_84), iVar2 == 0 &&
           (iVar2 = FUN_ram_4818023e(auStack_dc,auStack_7c), iVar2 == 0)) &&
          (iVar2 = FUN_ram_4818023e(auStack_bc,auStack_5c), iVar2 == 0)) &&
         ((iVar2 = FUN_ram_4818023e(auStack_d4,auStack_74), iVar2 == 0 &&
          (iVar2 = FUN_ram_4818023e(auStack_c4,auStack_64), iVar2 == 0)))))))) {
      iVar2 = FUN_ram_4817ffaa(auStack_cc,0);
      iVar4 = FUN_ram_4817ffaa(auStack_6c,0);
      if (iVar2 == iVar4) break;
    }
    piVar1 = piVar3 + 1;
    piVar3 = piVar3 + 1;
    iVar2 = *piVar1;
  }
  FUN_ram_48174022(&iStack_90);
  iStack_f4 = *piVar3;
  if (iStack_f4 != 0) {
    FUN_ram_4817fb90(auStack_bc);
    FUN_ram_4817fb90(auStack_ec);
    FUN_ram_4817fb90(auStack_e4);
    FUN_ram_4817fb90(auStack_dc);
    FUN_ram_48173ffc(auStack_d4);
LAB_ram_48177dc8:
    iVar2 = FUN_ram_481774d2(param_2,iStack_f4);
    return iVar2;
  }
  iVar2 = -0x4e80;
  iStack_f4 = 0;
LAB_ram_48177d88:
  FUN_ram_4817fb90(auStack_bc);
  FUN_ram_4817fb90(auStack_ec);
  FUN_ram_4817fb90(auStack_e4);
  FUN_ram_4817fb90(auStack_dc);
  FUN_ram_48173ffc(auStack_d4);
  return iVar2;
}


