/* Firmware entry: 0x48047b9e */

int FUN_ram_48047b9e(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char cStack_d9;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  int iStack_50;
  int iStack_4c;
  byte bStack_48;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0xb < *(byte *)(param_2 + 2)) {
    return 0;
  }
  memset(&uStack_88,0,0x48);
  iVar6 = param_1 + 0xb48;
  bStack_48 = 0xff;
  FUN_ram_4ff3ec14(iVar6,0xffffffff);
  uVar7 = (uint)*(byte *)(param_2 + 2);
  iVar5 = param_1 + uVar7 * 0xf0;
  if (((*(char *)(iVar5 + 0xf0) != '\x02') || (*(int *)(iVar5 + 0x7c) != *(int *)(param_2 + 4))) ||
     (*(int *)(iVar5 + 0x88) != *(int *)(param_2 + 0x10))) {
    FUN_ram_4ff3ee10(iVar6);
    return 0;
  }
  *(undefined1 *)(iVar5 + 0xf0) = 3;
  *(ushort *)(param_1 + 0xb60) =
       ~(ushort)(1 << (*(byte *)(param_2 + 2) & 0x1f)) & *(ushort *)(param_1 + 0xb60);
  uStack_d0 = *(uint *)(iVar5 + 8);
  uStack_cc = *(undefined4 *)(iVar5 + 0xc);
  uStack_c8 = *(undefined4 *)(iVar5 + 0x10);
  uStack_c4 = *(undefined4 *)(iVar5 + 0x14);
  uStack_c0 = *(undefined4 *)(iVar5 + 0x18);
  uStack_bc = *(undefined4 *)(iVar5 + 0x1c);
  iVar2 = param_1 + uVar7 * 0xf0 + 8;
  uStack_b0 = *(undefined4 *)(iVar5 + 0x28);
  uStack_b8 = *(uint *)(iVar5 + 0x20);
  uStack_b4 = *(undefined4 *)(iVar5 + 0x24);
  FUN_ram_4ff45158(&uStack_88,iVar2 + 0x28,0x41);
  uVar1 = *(undefined1 *)(iVar5 + 0x99);
  FUN_ram_4ff3ee10(iVar6);
  cStack_d9 = '\b';
  uStack_a8 = uStack_cc;
  uStack_a4 = uStack_c8;
  uStack_a0 = uStack_c4;
  uStack_9c = uStack_c0;
  uStack_8c = uStack_b0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_98 = uStack_bc;
  uStack_94 = uStack_b8;
  uStack_90 = uStack_b4;
  uStack_ac = uStack_d0;
  uVar8 = *(undefined4 *)(param_1 + 0xb50);
  if (((uStack_d0 < 0x800) && (bStack_48 < 0xc)) &&
     ((iStack_50 != 0 &&
      ((iStack_4c != 0 && (iVar5 = FUN_ram_48040cd4(&uStack_ac,uVar1,1), iVar5 != 0)))))) {
    uVar1 = uStack_94._2_1_;
    uStack_94 = uStack_94 & 0xffffff00;
    iVar3 = FUN_ram_480459fe(uVar8,&uStack_ac,1,0xe,uVar1,&uStack_d8,&cStack_d9,uStack_88,uStack_84,
                             uStack_80,&uStack_88,&uStack_d4);
    FUN_ram_4ff3ec14(iVar6,0xffffffff);
    cVar4 = cStack_d9;
    if (((byte)(cStack_d9 - 3U) < 3) || (cStack_d9 == '\a')) {
      if (iVar3 == 0) {
        iVar5 = uVar7 * 0xf0 + param_1;
        uVar8 = 4;
        if (*(char *)(iVar5 + 0xf1) != '\0') goto LAB_ram_48047dc8;
        uVar9 = FUN_ram_48025b94();
        if (((int)uVar9 - *(int *)(iVar5 + 0x90) < 1) &&
           (iVar3 = FUN_ram_48025ba6((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),cVar4),
           (uint)(iVar3 - *(int *)(iVar5 + 0xe8)) <= *(uint *)(iVar5 + 0xec))) {
          *(undefined1 *)(iVar5 + 0xf0) = 2;
          *(ushort *)(param_1 + 0xb60) =
               (ushort)(1 << (*(byte *)(param_2 + 2) & 0x1f)) | *(ushort *)(param_1 + 0xb60);
          iVar5 = 0;
          goto LAB_ram_48047d7c;
        }
        goto LAB_ram_48047dc6;
      }
    }
    else if (iVar3 == 0) {
      uVar8 = 3;
      if (cStack_d9 != '\t') goto LAB_ram_48047dc6;
      goto LAB_ram_48047dc8;
    }
    FUN_ram_48047a40(param_1,iVar2,0,7);
    param_1 = uVar7 * 0xf0 + param_1;
    *(undefined1 *)(param_1 + 0xc4) = 1;
    *(undefined4 *)(param_1 + 0xb8) = uStack_d8;
  }
  else {
    FUN_ram_4ff3ec14(iVar6,0xffffffff);
    cVar4 = '\f';
LAB_ram_48047dc6:
    uVar8 = 4;
LAB_ram_48047dc8:
    FUN_ram_48047a40(param_1,iVar2,cVar4,uVar8);
    iVar5 = 0;
  }
LAB_ram_48047d7c:
  FUN_ram_4ff3ee10(iVar6);
  return iVar5;
}


