/* Firmware entry: 0x48166d4a */

bool FUN_ram_48166d4a(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0x18);
  FUN_ram_48166caa(iVar2);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  iVar6 = *(int *)(iVar2 + 0x24);
  uVar1 = *(ushort *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 8);
  iVar3 = *(int *)(iVar2 + 0x6c);
  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar6 + 0x14) = uVar5;
  *(uint *)(iVar6 + 8) = (uint)uVar1;
  *(undefined4 *)(iVar6 + 0x10) = uVar4;
  *(undefined4 *)(iVar6 + 0x20) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 5;
  return iVar3 == 5;
}


