/* Firmware entry: 0x4805f8e4 */

void FUN_ram_4805f8e4(int *param_1,char *param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  int *piVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [28];
  char cStack_b4;
  undefined1 uStack_b3;
  char cStack_b2;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  ushort uStack_94;
  char cStack_92;
  undefined2 uStack_90;
  char cStack_8e;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  char cStack_4a;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = (char)param_1[1];
  if (((cVar1 == '\x01') && (param_2[0x14] != '\0')) &&
     ((fence(), DAT_ram_4ff4b8d0 == '\0' ||
      (((int *)param_1[2] == (int *)0x0 ||
       (uVar7 = (**(code **)(*(int *)param_1[2] + 4))(), 0xb < uVar7)))))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    (**(code **)(*param_3 + 0xb0))(param_3,cVar1,1);
  }
  uVar7 = (uint)*(byte *)((int)param_1 + 5);
  iStack_48 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  iVar5 = FUN_ram_480450a0(*param_1,uVar7 - (((uint)((ulonglong)uVar7 * 0xaaaaaaab >> 0x20) & 0xfe)
                                            + uVar7 / 3) & 0xff,param_2,param_3,param_4,&iStack_48,0
                           ,(char)param_1[1]);
  cStack_b4 = (char)param_1[1];
  cStack_b2 = '\0';
  iStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  cStack_92 = '\x01';
  if (iVar5 != 0) {
    cStack_b2 = *(char *)((int)param_1 + 5);
    if (((char)uStack_24 == cStack_b2) && (iStack_48 != 0 || iStack_44 != 0)) {
      iStack_b0 = iStack_40;
      if (iStack_40 == 0) {
        cStack_92 = '\x01';
        uStack_9c = 0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_ac = 0;
        bVar3 = 0;
        uVar8 = 0;
        uVar10 = 0;
        uVar11 = 0;
        cStack_b2 = '\0';
        cStack_b4 = '\0';
      }
      else {
        if ((short)uStack_3c == -1) goto LAB_ram_4805f99a;
        bVar3 = 0x12;
        cStack_92 = '\x04';
        uStack_9c = uStack_28;
        uStack_a0 = uStack_30;
        uStack_a8 = uStack_34;
        uStack_ac = uStack_38;
        uVar11 = uStack_24._1_1_;
        uVar10 = uStack_24._2_1_;
        if (cStack_b4 == '\x01') {
          cStack_92 = '\x04' - param_2[0x14];
          uVar8 = 1;
          bVar3 = 1;
        }
        else {
          uVar8 = 1;
        }
      }
    }
    else {
LAB_ram_4805f99a:
      cStack_92 = '\x01';
      bVar3 = 0;
      uVar8 = 0;
      cStack_b2 = '\0';
      cStack_b4 = '\0';
      uStack_9c = 0;
      iStack_b0 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_ac = 0;
      uVar11 = 0;
      uVar10 = 0;
    }
    uStack_98 = (uint)CONCAT12(uVar8,CONCAT11(uVar10,uVar11));
    uStack_94 = (ushort)bVar3;
  }
  uStack_a4 = 0;
  uStack_b3 = 0;
  (**(code **)(*param_3 + 0xa8))(param_3,&cStack_b4);
  uStack_90 = 0;
  cStack_8e = '\0';
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6e = 1;
  iVar6 = (**(code **)(*param_3 + 0xb8))(param_3,(char)param_1[1],&uStack_90);
  if (iVar6 == 0) {
    if (iVar5 != 0) {
      uVar7 = (uint)*(byte *)((int)param_1 + 5);
      iStack_dc = iStack_44;
      local_e0 = iStack_48;
      iStack_d8 = iStack_40;
      uStack_d4 = uStack_3c;
      FUN_ram_4ff2480c(auStack_d0,*param_1,&local_e0,
                       uVar7 - (((uint)((ulonglong)uVar7 * 0xaaaaaaab >> 0x20) & 0xfe) + uVar7 / 3)
                       & 0xff,param_2,param_3,param_4,(char)param_1[1]);
      goto LAB_ram_4805fa34;
    }
    if (*param_2 != '\0') {
      fence();
      goto joined_r0x4805fac6;
    }
  }
  else {
    if (((uStack_90._1_1_ == '\0') && (cStack_8e == *(char *)((int)param_1 + 5))) &&
       (iVar6 = (**(code **)(*param_3 + 0xbc))(param_3,(char)param_1[1],uStack_8c), iVar6 != 0))
    goto LAB_ram_4805fa34;
    if (*param_2 == '\0') {
      if (iVar5 != 0) goto LAB_ram_4805fa34;
    }
    else {
      if (iVar5 != 0) goto LAB_ram_4805fa34;
      fence();
joined_r0x4805fac6:
      if (((DAT_ram_4ff4b8d0 != '\0') && ((int *)param_1[2] != (int *)0x0)) &&
         (uVar7 = (**(code **)(*(int *)param_1[2] + 4))(), uVar7 < 0xc)) {
        uStack_4c = 0;
        uStack_6c = 0;
        uStack_6a = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        cStack_4a = '\x01';
        uVar7 = (**(code **)(*(int *)param_1[2] + 4))();
        if (((uVar7 < 0xc) &&
            (iVar5 = (**(code **)(*(int *)param_1[2] + 8))
                               ((int *)param_1[2],uVar7,param_4,&uStack_6c), iVar5 != 0)) &&
           (cStack_4a == '\x04')) {
          (**(code **)(*(int *)param_1[2] + 0xc))((int *)param_1[2],&uStack_6c);
          goto LAB_ram_4805fa34;
        }
      }
    }
  }
  iVar5 = (**(code **)(*param_3 + 0xb4))(param_3,(char)param_1[1]);
  if (iVar5 == 0) {
    FUN_ram_4805f4f0(param_1,param_2,param_3,param_4);
  }
LAB_ram_4805fa34:
  FUN_ram_4805f78e(param_1,param_2,param_3,param_4);
  iVar5 = *param_1;
  iVar6 = iVar5 + 0xc;
  FUN_ram_4ff3ec14(iVar6,0xffffffff);
  bVar3 = *(byte *)(iVar5 + 0x3bf6);
  FUN_ram_4ff3ee10(iVar6);
  if (((bVar3 & *(byte *)((int)param_1 + 6)) == 0) &&
     (iVar5 = (**(code **)(*param_3 + 0xb4))(param_3,(char)param_1[1]), iVar5 == 0)) {
    fence();
    bVar4 = false;
    if ((DAT_ram_4ff4b8d0 != '\0') && (piVar9 = (int *)param_1[2], piVar9 != (int *)0x0)) {
      uVar7 = (**(code **)(*piVar9 + 4))(piVar9);
      bVar4 = uVar7 < 0xc;
    }
  }
  else {
    bVar4 = true;
  }
  *(bool *)((int)param_1 + 7) = bVar4;
  if (bVar2) {
    (**(code **)(*param_3 + 0xb0))(param_3,cVar1,0);
  }
  return;
}


