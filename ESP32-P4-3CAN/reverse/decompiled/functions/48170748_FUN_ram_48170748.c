/* Firmware entry: 0x48170748 */

int FUN_ram_48170748(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  uint uVar15;
  int iVar16;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar13 = *(undefined4 *)(param_1 + 0x10);
  iVar9 = *(int *)(param_1 + 0xa4);
  iVar10 = *(int *)(param_1 + 0xb8);
  *(char *)(iVar9 + 2) = (char)uVar13;
  *(char *)(iVar9 + 1) = (char)((uint)uVar13 >> 8);
  puVar14 = *(undefined1 **)(param_1 + 0xa0);
  uVar1 = *(undefined1 *)(param_1 + 0xc1);
  uVar2 = *(undefined1 *)(param_1 + 0xc2);
  uVar3 = *(undefined1 *)(param_1 + 0xc3);
  uVar4 = *(undefined1 *)(param_1 + 0xc4);
  uVar5 = *(undefined1 *)(param_1 + 0xc5);
  uVar6 = *(undefined1 *)(param_1 + 0xc6);
  uVar7 = *(undefined1 *)(param_1 + 199);
  *puVar14 = *(undefined1 *)(param_1 + 0xc0);
  puVar14[1] = uVar1;
  puVar14[2] = uVar2;
  puVar14[3] = uVar3;
  puVar14[4] = uVar4;
  puVar14[5] = uVar5;
  puVar14[6] = uVar6;
  puVar14[7] = uVar7;
  puVar14 = *(undefined1 **)(param_1 + 0xa8);
  *puVar14 = (char)((uint)iVar10 >> 8);
  puVar14[1] = (char)iVar10;
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar16 = *(int *)(param_1 + 0xac);
    iVar11 = *(int *)(param_1 + 0xb0);
    iVar10 = *(int *)(param_1 + 0xb8);
    uVar15 = *(uint *)(param_1 + 0xb4);
    iVar9 = FUN_ram_4816f912();
    if (iVar9 != 0) {
      return iVar9;
    }
    if (iVar11 != iVar16) {
      return -0x6c00;
    }
    puVar14 = *(undefined1 **)(param_1 + 0xa8);
    *(int *)(param_1 + 0xb8) = iVar10;
    *(uint *)(param_1 + 0xb4) = uVar15 & 0xff;
    *puVar14 = (char)((uint)iVar10 >> 8);
    puVar14[1] = (char)iVar10;
  }
  puVar14 = *(undefined1 **)(param_1 + 0xa4);
  iVar9 = *(int *)(param_1 + 0xac);
  *puVar14 = (char)*(undefined4 *)(param_1 + 0xb4);
  iVar10 = (iVar9 - (int)puVar14) + iVar10;
  iVar11 = *(int *)(param_1 + 0xa4) + iVar10;
  iVar9 = *(int *)(param_1 + 0x48);
  iVar16 = iVar11 + 5;
  *(int *)(param_1 + 0xa4) = iVar11;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + iVar10;
  *(int *)(param_1 + 0xa8) = iVar11 + 3;
  *(int *)(param_1 + 0xac) = iVar16;
  *(int *)(param_1 + 0xb0) = iVar16;
  if (iVar9 != 0) {
    *(int *)(param_1 + 0xb0) = iVar16 + (*(int *)(iVar9 + 4) - *(int *)(iVar9 + 8));
  }
  pcVar12 = (char *)(param_1 + 199);
  iVar9 = 8;
  do {
    cVar8 = *pcVar12;
    iVar9 = iVar9 + -1;
    *pcVar12 = cVar8 + '\x01';
    if (cVar8 != -1) {
      if (param_2 != 1) {
        return 0;
      }
      iVar9 = FUN_ram_4817069a(param_1);
      return iVar9;
    }
    pcVar12 = pcVar12 + -1;
  } while (iVar9 != 0);
  return -0x6b80;
}


