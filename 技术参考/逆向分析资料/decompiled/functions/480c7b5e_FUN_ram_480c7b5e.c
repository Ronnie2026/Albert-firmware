/* Firmware entry: 0x480c7b5e */

void FUN_ram_480c7b5e(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar11 = *param_1;
  iVar6 = iVar11 + 0xb18;
  FUN_ram_4ff3ec14(iVar6,0xffffffff);
  cVar1 = *(char *)(iVar11 + 0xb39);
  FUN_ram_4ff3ee10(iVar6);
  uVar15 = 4;
  if (cVar1 != '\f') {
    uVar15 = 1;
  }
  uVar9 = (uint)*(ushort *)(param_1 + 0x8f);
  cVar1 = *(char *)((int)param_1 + 0x246);
  uVar2 = *(undefined1 *)((int)param_1 + 0x249);
  uVar3 = *(undefined1 *)((int)param_1 + 0x247);
  if (uVar9 == 0) {
    uVar12 = 0;
    uVar5 = 0;
    uVar13 = 0;
  }
  else {
    uVar8 = uVar9 * 100;
    uVar12 = 0;
    if (uVar8 < (uint)param_1[0x84]) {
      uVar12 = ((param_1[0x84] + uVar9 * -100) * (uint)*(byte *)((int)param_1 + 0x243) + (uVar9 - 1)
               ) / uVar9;
      if (*(byte *)(param_1 + 0x91) < uVar12) {
        uVar12 = (uint)*(byte *)(param_1 + 0x91);
      }
      uVar12 = uVar12 & 0xff;
    }
    if (uVar8 < (uint)param_1[0x83]) {
      uVar7 = ((param_1[0x83] + uVar9 * -100) * (uint)*(byte *)((int)param_1 + 0x243) + (uVar9 - 1))
              / uVar9;
      if (*(byte *)(param_1 + 0x91) < uVar7) {
        uVar7 = (uint)*(byte *)(param_1 + 0x91);
      }
      uVar5 = (undefined1)uVar7;
      uVar13 = 0;
      if ((char)param_1[0x92] == '\0') goto LAB_ram_480c7c54;
      uVar7 = param_1[0x85];
    }
    else {
      if ((char)param_1[0x92] == '\0') {
        uVar5 = 0;
        uVar13 = 0;
        goto LAB_ram_480c7c54;
      }
      uVar7 = param_1[0x85];
      uVar5 = 0;
    }
    uVar13 = 0;
    if (uVar8 < uVar7) {
      uVar9 = ((uVar7 + uVar9 * -100) * (uint)*(byte *)((int)param_1 + 0x243) + (uVar9 - 1)) / uVar9
      ;
      if (*(byte *)(param_1 + 0x91) < uVar9) {
        uVar9 = (uint)*(byte *)(param_1 + 0x91);
      }
      uVar13 = (undefined1)uVar9;
    }
  }
LAB_ram_480c7c54:
  uVar14 = 2;
  if (*(char *)((int)param_1 + 0x24a) == '\0') {
    uVar14 = *(undefined1 *)((int)param_1 + 0x24b);
  }
  iVar17 = param_1[0x8c];
  iVar16 = param_1[0x8d];
  FUN_ram_4ff3ec14(param_1[2],0xffffffff);
  iVar11 = param_1[1];
  *(undefined1 *)(iVar11 + 0x816) = 0;
  iVar6 = param_1[1];
  *(undefined1 *)(iVar11 + 0x814) = uVar2;
  *(undefined1 *)(iVar11 + 0x815) = uVar3;
  *(undefined1 *)(iVar6 + 0x817) = uVar5;
  *(undefined1 *)(param_1[1] + 0x818) = uVar13;
  *(undefined1 *)(param_1[1] + 0x835) = uVar14;
  iVar6 = param_1[1];
  *(int *)(iVar6 + 0x838) = iVar17;
  *(int *)(iVar6 + 0x83c) = iVar16;
  *(short *)(iVar6 + 0x81a) = (short)(uVar12 / uVar15);
  if ((cVar1 == '\0') || (*(char *)((int)param_1 + 0x246) == '\0')) {
    *(undefined4 *)(iVar6 + 0x81c) = 0;
    iVar11 = 0;
  }
  else {
    uVar9 = (uint)*(ushort *)(param_1 + 0x8f);
    uVar15 = (uint)*(byte *)((int)param_1 + 0x243);
    iVar16 = 0;
    if ((uVar9 != 0) && (uVar9 * 100 < (uint)param_1[0x84])) {
      uVar12 = ((param_1[0x84] + uVar9 * -100) * uVar15 + (uVar9 - 1)) / uVar9;
      if (*(byte *)(param_1 + 0x91) < uVar12) {
        uVar12 = (uint)*(byte *)(param_1 + 0x91);
      }
      iVar16 = uVar12 * uVar9;
    }
    iVar11 = param_1[0x83];
    *(uint *)(iVar6 + 0x81c) = ((uVar15 - 1) + iVar16) / uVar15 + uVar9 * 100;
  }
  *(int *)(iVar6 + 0x820) = iVar11;
  uVar2 = *(undefined1 *)((int)param_1 + 0x276);
  iVar11 = param_1[0x96];
  uVar4 = *(undefined2 *)((int)param_1 + 0x25a);
  iVar16 = param_1[0x9e];
  *(int *)(iVar6 + 0x830) = param_1[0x81];
  *(undefined1 *)(iVar6 + 0x824) = uVar2;
  *(short *)(iVar6 + 0x826) = (short)iVar11;
  *(undefined2 *)(iVar6 + 0x828) = uVar4;
  *(int *)(iVar6 + 0x82c) = iVar16;
  iVar6 = FUN_ram_48025ba6();
  bVar10 = false;
  if (*(char *)((int)param_1 + 0x24e) != '\0') {
    bVar10 = (uint)(iVar6 - param_1[0x82]) < 0x1f5;
  }
  iVar6 = param_1[2];
  *(bool *)(param_1[1] + 0x834) = bVar10;
  FUN_ram_4ff3ee10(iVar6);
  return;
}


