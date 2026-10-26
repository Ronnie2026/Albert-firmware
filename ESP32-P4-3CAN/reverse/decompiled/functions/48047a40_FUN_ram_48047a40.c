/* Firmware entry: 0x48047a40 */

void FUN_ram_48047a40(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_58 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar10 = *(int **)(param_1 + 0xb50);
  *(ushort *)(param_1 + 0xb60) =
       ~(ushort)(1 << (*(byte *)(param_2 + 0x72) & 0x1f)) & *(ushort *)(param_1 + 0xb60);
  piVar3 = piVar10 + 0x297;
  *(undefined1 *)(param_2 + 0x8e) = 0;
  *(undefined1 *)(param_2 + 0xe8) = 4;
  FUN_ram_4ff3ec14(piVar3,0xffffffff);
  piVar10 = (int *)*piVar10;
  FUN_ram_4ff3ee10(piVar3);
  if (piVar10 != (int *)0x0) {
    (**(code **)(*piVar10 + 0xa8))(piVar10,param_2 + 0x70);
  }
  puVar1 = local_58;
  puVar2 = &DAT_ram_48222eb8;
  do {
    puVar8 = puVar2;
    puVar7 = puVar1;
    uVar4 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar4;
    puVar7[2] = uVar5;
    puVar7[3] = uVar6;
    puVar1 = puVar7 + 4;
    puVar2 = puVar8 + 4;
  } while (puVar8 + 4 != &DAT_ram_48222ee8);
  uVar4 = puVar8[5];
  puVar7[4] = DAT_ram_48222ee8;
  puVar7[5] = uVar4;
  FUN_ram_4ff45158(param_2 + 0xa8,local_58,0x35);
  uVar4 = *(undefined4 *)(param_2 + 0x80);
  uVar5 = *(undefined4 *)(param_2 + 0x78);
  iVar9 = *(byte *)(param_2 + 0x72) + 1;
  *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_2 + 0xb5) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)(param_2 + 0xb4) = param_3;
  *(undefined1 *)(param_2 + 0xa8) = param_4;
  *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_2 + 0x84);
  *(char *)(param_2 + 0xd0) = (char)uVar4;
  *(char *)(param_2 + 0xd1) = (char)((uint)uVar4 >> 8);
  *(char *)(param_2 + 0xd2) = (char)((uint)uVar4 >> 0x10);
  *(char *)(param_2 + 0xd3) = (char)((uint)uVar4 >> 0x18);
  *(char *)(param_2 + 0xd4) = (char)uVar5;
  *(char *)(param_2 + 0xd5) = (char)((uint)uVar5 >> 8);
  *(char *)(param_2 + 0xd6) = (char)((uint)uVar5 >> 0x10);
  *(char *)(param_2 + 0xd7) = (char)((uint)uVar5 >> 0x18);
  *(char *)(param_2 + 0xd8) = (char)iVar9;
  *(char *)(param_2 + 0xd9) = (char)((uint)iVar9 >> 8);
  *(undefined1 *)(param_2 + 0xda) = 0x11;
  return;
}


