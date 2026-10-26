/* Firmware entry: 0x48099146 */

void FUN_ram_48099146(int param_1,int param_2,int *param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 auStack_6c [12];
  uint uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  char cStack_38;
  byte bStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar8 = (uint)*(byte *)(param_1 + 0x2bd7) * 0x10 + param_1;
  iVar10 = *(byte *)(param_1 + 0x2bd7) + 0x34e;
  *(undefined4 *)(iVar8 + 0x34e8) = 0;
  *(undefined4 *)(iVar8 + 0x34ec) = 0;
  *(undefined4 *)(iVar8 + 0x34f0) = 0;
  *(undefined2 *)(iVar8 + 0x34f4) = 0;
  *(undefined2 *)(iVar10 * 0x10 + param_1 + 0x16) = 1;
  uVar1 = FUN_ram_4ff3c5de();
  *(undefined4 *)(iVar8 + 0x34e8) = uVar1;
  iVar6 = *param_3;
  *(uint *)(iVar8 + 0x34f0) = param_4;
  *(int *)(iVar8 + 0x34ec) = iVar6;
  uVar2 = 0xffff;
  if (param_5 < 0x10000) {
    uVar2 = param_5;
  }
  *(short *)(iVar8 + 0x34f4) = (short)uVar2;
  *(char *)(iVar8 + 0x34f6) = (char)param_2;
  *(undefined1 *)(iVar8 + 0x34f7) = *(undefined1 *)((int)param_3 + 0xd);
  if (*(uint *)(param_1 + 0x3570) < param_4) {
    iVar6 = iVar10 * 0x10 + param_1;
    uVar1 = *(undefined4 *)(iVar6 + 0xc);
    uVar5 = *(undefined4 *)(iVar6 + 0x10);
    uVar7 = *(undefined4 *)(iVar6 + 0x14);
    *(undefined4 *)(param_1 + 0x3568) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)(param_1 + 0x356c) = uVar1;
    *(undefined4 *)(param_1 + 0x3570) = uVar5;
    *(undefined4 *)(param_1 + 0x3574) = uVar7;
  }
  bVar4 = *(byte *)(param_1 + 0x2bd8);
  *(byte *)(param_1 + 0x2bd7) = *(char *)(param_1 + 0x2bd7) + 1U & 7;
  if (bVar4 < 8) {
    cVar3 = bVar4 + 1;
    bVar4 = bVar4 + 1;
    *(char *)(param_1 + 0x2bd8) = cVar3;
  }
  else {
    *(int *)(param_1 + 0x30d4) = *(int *)(param_1 + 0x30d4) + 1;
  }
  *(byte *)(param_1 + 0x30d0) = bVar4;
  uVar2 = FUN_ram_480409ae(param_3,0,0);
  if (uVar2 == 8) {
LAB_ram_48099240:
    if (param_2 == 2) {
      uStack_44 = 5000;
      goto LAB_ram_48099252;
    }
LAB_ram_48099246:
    FUN_ram_48040862(&uStack_58,uVar2);
    uVar2 = uStack_4c;
  }
  else {
    if (uVar2 < 9) {
      if (((uVar2 == 5) || (5 < uVar2)) || (uVar2 == 4)) goto LAB_ram_48099240;
      if (uVar2 == 0) goto LAB_ram_4809931e;
LAB_ram_4809930a:
      if (param_2 == 2) {
        uStack_44 = 2000;
        goto LAB_ram_48099252;
      }
      goto LAB_ram_48099246;
    }
    if (uVar2 == 0x13) {
      if (param_2 == 2) {
        uStack_44 = 20000;
        goto LAB_ram_48099252;
      }
      goto LAB_ram_48099246;
    }
    if (uVar2 < 0x14) {
      if (uVar2 == 9) goto LAB_ram_48099240;
      if (uVar2 == 0x12) goto LAB_ram_4809930a;
    }
    else if (uVar2 == 0x15) {
      if (param_2 == 2) {
        return;
      }
      goto LAB_ram_48099246;
    }
LAB_ram_4809931e:
    if (param_2 == 2) {
      return;
    }
    if (*(char *)((int)param_3 + 0xd) == '\x02') {
      if (((*param_3 == 0x3a1) && ((char)param_3[1] == '\b')) &&
         ((*(byte *)((int)param_3 + 0xb) & 0xf) == 2)) {
        return;
      }
    }
    else if (((*(char *)((int)param_3 + 0xd) == '\x01') && (*param_3 == 0x3f8)) &&
            ((byte)((char)param_3[1] - 6U) < 3)) {
      return;
    }
    iVar6 = FUN_ram_480409ae(param_3,0,0);
    FUN_ram_48040862(auStack_6c,iVar6);
    FUN_ram_48040862(&uStack_58,iVar6);
    uVar2 = uStack_60;
    if (((char)iStack_50 == '\0') && (uStack_44 = 2000, uVar2 = uStack_60, iVar6 != 0x15))
    goto LAB_ram_48099252;
  }
  uStack_44 = uVar2;
  if (uStack_44 == 0) {
    return;
  }
LAB_ram_48099252:
  if (uStack_44 < param_4) {
    uStack_58 = 0;
    *(int *)(param_1 + 0x2fe8) = *(int *)(param_1 + 0x2fe8) + 1;
    cStack_38 = *(char *)((int)param_3 + 0xd);
    iStack_3c = *param_3;
    uStack_54 = cycle;
    bStack_37 = 0xff;
    if ((char)param_3[1] == '\b') {
      if (cStack_38 == '\x01') {
        if (iStack_3c == 0x3fd) {
          bStack_37 = *(byte *)((int)param_3 + 5) & 7;
        }
      }
      else if ((cStack_38 == '\x02') && (iStack_3c == 0x3c2)) {
        bStack_37 = *(byte *)((int)param_3 + 5) & 3;
      }
    }
    iStack_50 = param_3[4];
    uStack_36 = *(char *)((int)param_3 + 0xe) != '\0' || iStack_50 != 0;
    uStack_4c = param_4 + iStack_50;
    uStack_35 = 6;
    uVar9 = 1;
    if (param_2 != 1) {
      uVar9 = 2;
    }
    uStack_34 = (uint)CONCAT11(0xff,uVar9);
    uStack_48 = param_4;
    uStack_40 = param_5;
    FUN_ram_4ff2abc2(&uStack_58);
  }
  return;
}


