/* Firmware entry: 0x4818411c */

int FUN_ram_4818411c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_4 & 0xffffffbf) == 0x80) || (param_4 == 0x100)) {
    iVar2 = FUN_ram_481718bc(param_2,param_4,1);
    if (iVar2 == 0) {
      return -0x14;
    }
    if ((*(uint *)(iVar2 + 4) & 0x1f) == 0x10) {
      FUN_ram_4817191c(param_1);
      iVar2 = FUN_ram_48171962(param_1,iVar2);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_ram_481719ba(param_1,param_3,param_4,1);
      if (iVar2 != 0) {
        return iVar2;
      }
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_34 = 0;
      iVar2 = FUN_ram_48171b10(param_1,&uStack_30,0x10,&uStack_30,&uStack_34);
      if (iVar2 != 0) {
        return iVar2;
      }
      *(undefined1 *)(param_1 + 0x189) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 200) = uStack_30;
      *(undefined4 *)(param_1 + 0xcc) = uStack_2c;
      *(undefined4 *)(param_1 + 0xd0) = uStack_28;
      *(undefined4 *)(param_1 + 0xd4) = uStack_24;
      iVar8 = 3;
      iVar2 = 4;
      do {
        iVar7 = iVar2 * 0x20 + param_1;
        iVar1 = param_1 + iVar2 * 0x10;
        uVar9 = __bswapdi2(*(undefined4 *)(iVar7 + 0x50),*(undefined4 *)(iVar7 + 0x54));
        uVar10 = __bswapdi2((int)(uVar9 >> 1),(int)((uVar9 >> 1) >> 0x20));
        *(byte *)(iVar1 + 0x50) = (byte)uVar10;
        *(char *)(iVar1 + 0x54) = (char)((ulonglong)uVar10 >> 0x20);
        *(char *)(iVar1 + 0x51) = (char)((ulonglong)uVar10 >> 8);
        *(char *)(iVar1 + 0x52) = (char)((ulonglong)uVar10 >> 0x10);
        *(char *)(iVar1 + 0x53) = (char)((ulonglong)uVar10 >> 0x18);
        *(char *)(iVar1 + 0x55) = (char)((ulonglong)uVar10 >> 0x28);
        *(char *)(iVar1 + 0x56) = (char)((ulonglong)uVar10 >> 0x30);
        *(char *)(iVar1 + 0x57) = (char)((ulonglong)uVar10 >> 0x38);
        iVar8 = iVar8 + -1;
        iVar2 = iVar2 >> 1;
        *(byte *)(iVar1 + 0x50) = *(char *)(iVar7 + 0x4f) << 7 | (byte)uVar10;
        uVar9 = __bswapdi2(*(undefined4 *)(iVar7 + 0x48),*(undefined4 *)(iVar7 + 0x4c));
        uVar10 = __bswapdi2((int)(uVar9 >> 1),(int)((uVar9 >> 1) >> 0x20));
        *(byte *)(iVar1 + 0x48) = (byte)uVar10;
        *(char *)(iVar1 + 0x4e) = (char)((ulonglong)uVar10 >> 0x30);
        *(char *)(iVar1 + 0x4c) = (char)((ulonglong)uVar10 >> 0x20);
        *(char *)(iVar1 + 0x49) = (char)((ulonglong)uVar10 >> 8);
        *(char *)(iVar1 + 0x4a) = (char)((ulonglong)uVar10 >> 0x10);
        *(char *)(iVar1 + 0x4b) = (char)((ulonglong)uVar10 >> 0x18);
        *(char *)(iVar1 + 0x4d) = (char)((ulonglong)uVar10 >> 0x28);
        *(char *)(iVar1 + 0x4f) = (char)((ulonglong)uVar10 >> 0x38);
        *(byte *)(iVar1 + 0x48) = (*(byte *)(iVar7 + 0x57) & 1) * -0x1f ^ (byte)uVar10;
      } while (iVar8 != 0);
      iVar8 = 4;
      iVar2 = 8;
      do {
        iVar7 = iVar2 * 0x10 + param_1;
        iVar1 = iVar2 * 0x10 + param_1;
        uVar10 = __bswapdi2(*(undefined4 *)(iVar7 + 0x48),*(undefined4 *)(iVar7 + 0x4c));
        *(char *)(iVar1 + 0x48) = (char)uVar10;
        *(char *)(iVar1 + 0x4c) = (char)((ulonglong)uVar10 >> 0x20);
        *(char *)(iVar1 + 0x4b) = (char)((ulonglong)uVar10 >> 0x18);
        *(char *)(iVar1 + 0x4d) = (char)((ulonglong)uVar10 >> 0x28);
        *(char *)(iVar1 + 0x4e) = (char)((ulonglong)uVar10 >> 0x30);
        *(char *)(iVar1 + 0x4f) = (char)((ulonglong)uVar10 >> 0x38);
        *(char *)(iVar1 + 0x49) = (char)((ulonglong)uVar10 >> 8);
        *(char *)(iVar1 + 0x4a) = (char)((ulonglong)uVar10 >> 0x10);
        uVar10 = __bswapdi2(*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54));
        iVar8 = iVar8 + -1;
        *(char *)(iVar1 + 0x50) = (char)uVar10;
        *(char *)(iVar1 + 0x54) = (char)((ulonglong)uVar10 >> 0x20);
        *(char *)(iVar1 + 0x51) = (char)((ulonglong)uVar10 >> 8);
        *(char *)(iVar1 + 0x52) = (char)((ulonglong)uVar10 >> 0x10);
        *(char *)(iVar1 + 0x53) = (char)((ulonglong)uVar10 >> 0x18);
        *(char *)(iVar1 + 0x55) = (char)((ulonglong)uVar10 >> 0x28);
        *(char *)(iVar1 + 0x56) = (char)((ulonglong)uVar10 >> 0x30);
        *(char *)(iVar1 + 0x57) = (char)((ulonglong)uVar10 >> 0x38);
        iVar2 = iVar2 >> 1;
      } while (iVar8 != 0);
      iVar8 = 3;
      iVar2 = 2;
      do {
        if (1 < iVar2) {
          iVar1 = iVar2 * 0x10;
          iVar7 = param_1 + 0x58;
          do {
            iVar6 = 0;
            do {
              iVar5 = iVar1 + 0x48 + iVar6;
              pbVar3 = (byte *)(iVar7 + iVar6);
              pbVar4 = (byte *)(iVar1 + iVar7 + iVar6);
              iVar6 = iVar6 + 1;
              *pbVar4 = *(byte *)(iVar5 + param_1) ^ *pbVar3;
            } while (iVar6 != 0x10);
            iVar7 = iVar7 + 0x10;
          } while (param_1 + 0x48 + iVar1 != iVar7);
        }
        iVar8 = iVar8 + -1;
        iVar2 = iVar2 << 1;
      } while (iVar8 != 0);
      return 0;
    }
  }
  return -0x14;
}


