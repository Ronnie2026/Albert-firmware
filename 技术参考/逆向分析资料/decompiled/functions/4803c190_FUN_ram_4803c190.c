/* Firmware entry: 0x4803c190 */

undefined4 FUN_ram_4803c190(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 local_68 [15];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0xb < param_2) {
    return 0;
  }
  iVar8 = param_2 * 0xf0;
  iVar12 = param_1 + iVar8;
  FUN_ram_4ff3ec14(param_1 + 0xb48,0xffffffff);
  if (*(char *)(iVar12 + 0xf0) == '\x02') {
    iVar3 = FUN_ram_48025ba6();
    iVar13 = iVar8 + 8 + param_1;
    if ((uint)(iVar3 - *(int *)(iVar12 + 0xe8)) <= *(uint *)(iVar12 + 0xec)) {
      if (param_3 - *(int *)(iVar12 + 0x90) < 1) {
        puVar11 = *(undefined4 **)(param_1 + 0xb50);
        puVar9 = puVar11 + 0x297;
        uVar1 = *(undefined1 *)(iVar12 + 0x15);
        FUN_ram_4ff3ec14(puVar9,0xffffffff);
        piVar10 = (int *)*puVar11;
        FUN_ram_4ff3ee10(puVar9);
        iVar12 = 0;
        if (piVar10 != (int *)0x0) {
          iVar12 = (**(code **)(*piVar10 + 0x154))(piVar10,uVar1);
        }
        iVar3 = param_2 * 0xf0 + param_1;
        if (*(int *)(iVar3 + 0x8c) == iVar12) {
          FUN_ram_4ff45158(param_4,iVar13 + 0x70,0x23);
          uVar2 = 1;
          goto LAB_ram_4803c1f0;
        }
        puVar11 = *(undefined4 **)(param_1 + 0xb50);
        *(ushort *)(param_1 + 0xb60) =
             ~(ushort)(1 << (*(byte *)(iVar3 + 0x7a) & 0x1f)) & *(ushort *)(param_1 + 0xb60);
        puVar9 = puVar11 + 0x297;
        *(undefined1 *)(iVar3 + 0x96) = 0;
        *(undefined1 *)(iVar3 + 0xf0) = 4;
        FUN_ram_4ff3ec14(puVar9,0xffffffff);
        piVar10 = (int *)*puVar11;
        FUN_ram_4ff3ee10(puVar9);
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 0xa8))(piVar10,iVar8 + 0x78 + param_1);
        }
        puVar9 = local_68;
        puVar11 = &DAT_ram_48222eb8;
        do {
          puVar6 = puVar11;
          puVar5 = puVar9;
          uVar7 = puVar6[1];
          uVar2 = puVar6[2];
          uVar4 = puVar6[3];
          *puVar5 = *puVar6;
          puVar5[1] = uVar7;
          puVar5[2] = uVar2;
          puVar5[3] = uVar4;
          puVar9 = puVar5 + 4;
          puVar11 = puVar6 + 4;
        } while (puVar6 + 4 != &DAT_ram_48222ee8);
        uVar2 = puVar6[5];
        puVar5[4] = DAT_ram_48222ee8;
        puVar5[5] = uVar2;
        FUN_ram_4ff45158(iVar13 + 0xa8,local_68,0x35);
        iVar8 = param_1 + param_2 * 0xf0;
        uVar2 = *(undefined4 *)(iVar8 + 0x88);
        uVar4 = *(undefined4 *)(iVar8 + 0x80);
        iVar12 = *(byte *)(iVar8 + 0x7a) + 1;
        *(undefined1 *)(iVar8 + 0xbd) = *(undefined1 *)(iVar8 + 0x78);
        *(undefined4 *)(iVar8 + 200) = *(undefined4 *)(iVar8 + 0xa0);
        *(undefined4 *)(iVar8 + 0xcc) = *(undefined4 *)(iVar8 + 0xa4);
        *(undefined4 *)(iVar8 + 0xd0) = *(undefined4 *)(iVar8 + 0xa8);
        *(undefined4 *)(iVar8 + 0xd4) = *(undefined4 *)(iVar8 + 0xac);
        *(undefined4 *)(iVar8 + 0xc0) = *(undefined4 *)(iVar8 + 0x8c);
        *(undefined1 *)(iVar8 + 0xbc) = 10;
        *(undefined1 *)(iVar8 + 0xb0) = 5;
        *(undefined4 *)(iVar8 + 0xb4) = *(undefined4 *)(iVar8 + 0x7c);
        *(char *)(iVar13 + 0xd8) = (char)iVar12;
        *(char *)(iVar13 + 0xd9) = (char)((uint)iVar12 >> 8);
        *(char *)(iVar13 + 0xd0) = (char)uVar2;
        *(char *)(iVar13 + 0xd4) = (char)uVar4;
        *(char *)(iVar13 + 0xd1) = (char)((uint)uVar2 >> 8);
        *(char *)(iVar13 + 0xd2) = (char)((uint)uVar2 >> 0x10);
        *(char *)(iVar13 + 0xd3) = (char)((uint)uVar2 >> 0x18);
        *(char *)(iVar13 + 0xd5) = (char)((uint)uVar4 >> 8);
        *(char *)(iVar13 + 0xd6) = (char)((uint)uVar4 >> 0x10);
        *(char *)(iVar13 + 0xd7) = (char)((uint)uVar4 >> 0x18);
        *(undefined1 *)(iVar13 + 0xda) = 0x11;
        goto LAB_ram_4803c1ee;
      }
    }
    iVar12 = param_2 * 0xf0 + param_1;
    puVar11 = *(undefined4 **)(param_1 + 0xb50);
    *(ushort *)(param_1 + 0xb60) =
         ~(ushort)(1 << (*(byte *)(iVar12 + 0x7a) & 0x1f)) & *(ushort *)(param_1 + 0xb60);
    puVar9 = puVar11 + 0x297;
    *(undefined1 *)(iVar12 + 0x96) = 0;
    *(undefined1 *)(iVar12 + 0xf0) = 4;
    FUN_ram_4ff3ec14(puVar9,0xffffffff);
    piVar10 = (int *)*puVar11;
    FUN_ram_4ff3ee10(puVar9);
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xa8))(piVar10,iVar8 + 0x78 + param_1);
    }
    puVar9 = local_68;
    puVar11 = &DAT_ram_48222eb8;
    do {
      puVar6 = puVar11;
      puVar5 = puVar9;
      uVar7 = puVar6[1];
      uVar2 = puVar6[2];
      uVar4 = puVar6[3];
      *puVar5 = *puVar6;
      puVar5[1] = uVar7;
      puVar5[2] = uVar2;
      puVar5[3] = uVar4;
      puVar9 = puVar5 + 4;
      puVar11 = puVar6 + 4;
    } while (puVar6 + 4 != &DAT_ram_48222ee8);
    uVar2 = puVar6[5];
    puVar5[4] = DAT_ram_48222ee8;
    puVar5[5] = uVar2;
    FUN_ram_4ff45158(iVar13 + 0xa8,local_68,0x35);
    iVar12 = param_2 * 0xf0 + param_1;
    uVar2 = *(undefined4 *)(iVar12 + 0x88);
    uVar4 = *(undefined4 *)(iVar12 + 0x80);
    iVar8 = *(byte *)(iVar12 + 0x7a) + 1;
    *(undefined1 *)(iVar12 + 0xbd) = *(undefined1 *)(iVar12 + 0x78);
    *(undefined4 *)(iVar12 + 0xcc) = *(undefined4 *)(iVar12 + 0xa4);
    *(undefined4 *)(iVar12 + 0xd0) = *(undefined4 *)(iVar12 + 0xa8);
    *(undefined4 *)(iVar12 + 0xd4) = *(undefined4 *)(iVar12 + 0xac);
    *(undefined4 *)(iVar12 + 0xc0) = *(undefined4 *)(iVar12 + 0x8c);
    *(undefined1 *)(iVar12 + 0xbc) = 9;
    *(undefined1 *)(iVar12 + 0xb0) = 3;
    *(undefined4 *)(iVar12 + 0xb4) = *(undefined4 *)(iVar12 + 0x7c);
    *(undefined4 *)(iVar12 + 200) = *(undefined4 *)(iVar12 + 0xa0);
    *(char *)(iVar13 + 0xd8) = (char)iVar8;
    *(char *)(iVar13 + 0xd9) = (char)((uint)iVar8 >> 8);
    *(char *)(iVar13 + 0xd0) = (char)uVar2;
    *(char *)(iVar13 + 0xd4) = (char)uVar4;
    *(char *)(iVar13 + 0xd1) = (char)((uint)uVar2 >> 8);
    *(char *)(iVar13 + 0xd2) = (char)((uint)uVar2 >> 0x10);
    *(char *)(iVar13 + 0xd3) = (char)((uint)uVar2 >> 0x18);
    *(char *)(iVar13 + 0xd5) = (char)((uint)uVar4 >> 8);
    *(char *)(iVar13 + 0xd6) = (char)((uint)uVar4 >> 0x10);
    *(char *)(iVar13 + 0xd7) = (char)((uint)uVar4 >> 0x18);
    *(undefined1 *)(iVar13 + 0xda) = 0x11;
  }
LAB_ram_4803c1ee:
  uVar2 = 0;
LAB_ram_4803c1f0:
  FUN_ram_4ff3ee10(param_1 + 0xb48);
  return uVar2;
}


