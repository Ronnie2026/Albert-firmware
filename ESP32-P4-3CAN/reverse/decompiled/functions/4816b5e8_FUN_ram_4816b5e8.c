/* Firmware entry: 0x4816b5e8 */

undefined4 FUN_ram_4816b5e8(int *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = param_1[0x10];
  uVar6 = (uint)*(byte *)(*(int *)(iVar4 + 0x10) + 10);
  if ((10 < uVar6) || ((0x69eU >> (uVar6 & 0x1f) & 1) == 0)) {
    iVar4 = param_1[1];
LAB_ram_4816b6a8:
    param_1[1] = iVar4 + 1;
    return 0;
  }
  iVar7 = *param_1;
  if (*(char *)(iVar7 + 8) == '\0') {
    if (*(char *)(iVar4 + 0x168) == '\0') {
      iVar4 = param_1[1];
      goto LAB_ram_4816b6a8;
    }
LAB_ram_4816b61a:
    piVar8 = *(int **)(iVar4 + 0xfc);
    if ((piVar8 != (int *)0x0) || (piVar8 = *(int **)(iVar7 + 0x54), piVar8 != (int *)0x0)) {
LAB_ram_4816b622:
      iVar4 = *piVar8;
      if (iVar4 != 0) goto LAB_ram_4816b62a;
    }
    uVar5 = 0;
    uVar3 = 0;
    uVar2 = 0;
    iVar7 = 7;
  }
  else {
    if (*(char *)(iVar7 + 8) != '\x01') goto LAB_ram_4816b61a;
    if (*(int **)(iVar4 + 0xfc) == (int *)0x0) {
      piVar8 = *(int **)(iVar7 + 0x54);
      if (piVar8 == (int *)0x0) {
        return 0xffff9400;
      }
      if (*piVar8 == 0) {
        return 0xffff9400;
      }
      goto LAB_ram_4816b622;
    }
    iVar4 = **(int **)(iVar4 + 0xfc);
    if (iVar4 == 0) {
      return 0xffff9400;
    }
LAB_ram_4816b62a:
    iVar7 = 7;
    do {
      uVar6 = *(uint *)(iVar4 + 8);
      if (0xffdU - iVar7 < uVar6) {
        return 0xffff9600;
      }
      *(char *)(param_1[0x2c] + iVar7) = (char)(uVar6 >> 0x10);
      *(char *)(param_1[0x2c] + iVar7 + 1) = (char)(uVar6 >> 8);
      *(char *)(iVar7 + param_1[0x2c] + 2) = (char)uVar6;
      FUN_ram_4ff45158(param_1[0x2c] + iVar7 + 3,*(undefined4 *)(iVar4 + 0xc),uVar6);
      iVar4 = *(int *)(iVar4 + 0x194);
      iVar7 = uVar6 + iVar7 + 3;
    } while (iVar4 != 0);
    iVar4 = iVar7 + -7;
    uVar2 = (undefined1)((uint)iVar4 >> 0x10);
    uVar3 = (undefined1)((uint)iVar4 >> 8);
    uVar5 = (undefined1)iVar4;
  }
  *(undefined1 *)(param_1[0x2c] + 4) = uVar2;
  *(undefined1 *)(param_1[0x2c] + 5) = uVar3;
  *(undefined1 *)(param_1[0x2c] + 6) = uVar5;
  param_1[0x2e] = iVar7;
  param_1[0x2d] = 0x16;
  *(undefined1 *)param_1[0x2c] = 0xb;
  param_1[1] = param_1[1] + 1;
  uVar1 = FUN_ram_48170976(param_1,1);
  return uVar1;
}


