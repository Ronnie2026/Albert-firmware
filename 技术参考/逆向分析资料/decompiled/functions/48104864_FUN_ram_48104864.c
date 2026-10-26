/* Firmware entry: 0x48104864 */

void FUN_ram_48104864(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  char cVar11;
  char local_154 [2];
  char cStack_152;
  char cStack_151;
  undefined4 uStack_150;
  char cStack_14b;
  uint auStack_148 [14];
  char cStack_110;
  char cStack_10d;
  char cStack_f8;
  char cStack_d9;
  uint uStack_98;
  uint uStack_94;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_58;
  ushort uStack_48;
  undefined1 uStack_44;
  char acStack_24 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar10 = param_1 + 0x574;
  FUN_ram_48053f2a(local_154,iVar10,param_2);
  if (((((*(int *)(param_1 + 0x778) == 0) && (*(int *)(param_1 + 0x7a0) == 0)) &&
       (*(int *)(param_1 + 0x750) == 0)) &&
      (((*(int *)(param_1 + 0x728) == 0 && (cStack_14b == '\0')) &&
       ((cStack_f8 == '\0' && ((cStack_d9 == '\0' && (cStack_10d == '\0')))))))) &&
     (cStack_110 == '\0')) {
    cVar1 = *(char *)(param_1 + 0x7c9);
    cVar11 = '\0';
joined_r0x48104982:
    if (cVar1 == '\0') {
      return;
    }
    piVar9 = *(int **)(param_1 + 0x5c);
    piVar2 = piVar9 + 0x297;
    FUN_ram_4ff3ec14(piVar2,0xffffffff);
    piVar9 = (int *)*piVar9;
    FUN_ram_4ff3ee10(piVar2);
    memset(local_154,0,0x134);
    if (piVar9 == (int *)0x0) goto LAB_ram_48104a54;
  }
  else {
    piVar9 = *(int **)(param_1 + 0x5c);
    piVar2 = piVar9 + 0x297;
    FUN_ram_4ff3ec14(piVar2,0xffffffff);
    piVar9 = (int *)*piVar9;
    FUN_ram_4ff3ee10(piVar2);
    memset(local_154,0,0x134);
    uStack_58 = 0xffffffff;
    uStack_44 = 1;
    if (((piVar9 == (int *)0x0) ||
        (iVar3 = (**(code **)(*piVar9 + 0x15c))(piVar9,2,local_154), cVar11 = local_154[0],
        iVar3 == 0)) || (local_154[0] == '\0')) {
      cVar1 = *(char *)(param_1 + 0x7c9);
      cVar11 = '\x01';
      goto joined_r0x48104982;
    }
    if (*(char *)(param_1 + 0x7c9) == '\0') {
      pcVar8 = local_154;
      puVar7 = (undefined4 *)(param_1 + 2000);
      do {
        uVar4 = *(undefined4 *)(pcVar8 + 4);
        uVar5 = *(undefined4 *)(pcVar8 + 8);
        uVar6 = *(undefined4 *)(pcVar8 + 0xc);
        *puVar7 = *(undefined4 *)pcVar8;
        puVar7[1] = uVar4;
        puVar7[2] = uVar5;
        puVar7[3] = uVar6;
        pcVar8 = pcVar8 + 0x10;
        puVar7 = puVar7 + 4;
      } while (pcVar8 != acStack_24);
      *puVar7 = *(undefined4 *)pcVar8;
      *(undefined1 *)(param_1 + 0x7c9) = 1;
    }
    piVar9 = *(int **)(param_1 + 0x5c);
    piVar2 = piVar9 + 0x297;
    *(int *)(param_1 + 0x7cc) = param_2 + 500;
    FUN_ram_4ff3ec14(piVar2,0xffffffff);
    piVar9 = (int *)*piVar9;
    FUN_ram_4ff3ee10(piVar2);
    memset(local_154,0,0x134);
    if (piVar9 == (int *)0x0) {
      return;
    }
  }
  uStack_44 = 1;
  uStack_58 = 0xffffffff;
  iVar3 = (**(code **)(*piVar9 + 0x15c))(piVar9,2,local_154);
  if (((iVar3 != 0) && (local_154[0] != '\0')) &&
     ((((cStack_151 != '\0' || ((cStack_152 != '\0' || (*(ushort *)(param_1 + 0x8dc) < uStack_48))))
       || (*(uint *)(param_1 + 0x7f4) < auStack_148[6])) ||
      ((((*(uint *)(param_1 + 0x890) < uStack_94 || (*(uint *)(param_1 + 0x88c) < uStack_98)) ||
        (*(uint *)(param_1 + 0x8a8) < uStack_7c)) || (*(uint *)(param_1 + 0x8ac) < uStack_78)))))) {
    FUN_ram_4ff3ec14(iVar10,0xffffffff);
    if (*(char *)(param_1 + 0x620) == '\0') {
      *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + 1;
    }
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    *(undefined4 *)(param_1 + 0x5c8) = 0;
    *(undefined1 *)(param_1 + 0x634) = 0;
    *(undefined1 *)(param_1 + 0x5d1) = 0;
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    *(undefined1 *)(param_1 + 0x5d3) = 0;
    *(undefined1 *)(param_1 + 0x5e0) = 0;
    *(undefined2 *)(param_1 + 0x628) = 0;
    *(undefined1 *)(param_1 + 0x62a) = 0;
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined1 *)(param_1 + 0x632) = 0;
    *(undefined2 *)(param_1 + 0x630) = 0;
    *(undefined1 *)(param_1 + 0x636) = 0;
    *(undefined2 *)(param_1 + 0x648) = 0;
    *(undefined2 *)(param_1 + 0x608) = 0;
    *(undefined4 *)(param_1 + 0x5bc) = 0;
    *(undefined2 *)(param_1 + 0x5c0) = 0;
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(undefined1 *)(param_1 + 0x5c2) = 8;
    FUN_ram_4ff3ee10(iVar10);
    *(undefined1 *)(param_1 + 0x7c9) = 0;
    *(undefined4 *)(param_1 + 0x7cc) = 0;
    return;
  }
LAB_ram_48104a54:
  if ((cVar11 == '\0') && (-1 < param_2 - *(int *)(param_1 + 0x7cc))) {
    *(undefined1 *)(param_1 + 0x7c9) = 0;
    *(undefined4 *)(param_1 + 0x7cc) = 0;
  }
  return;
}


