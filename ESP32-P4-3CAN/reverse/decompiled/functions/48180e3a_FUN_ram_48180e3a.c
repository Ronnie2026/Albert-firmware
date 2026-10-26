/* Firmware entry: 0x48180e3a */

int FUN_ram_48180e3a(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int local_30;
  int iStack_2c;
  int *piStack_28;
  ushort uStack_24;
  undefined2 uStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(uint *)*param_1 & 1) == 0) {
    return -0xe;
  }
  pbVar2 = &DAT_ram_4823a030;
  uVar3 = 3;
  while( true ) {
    iVar4 = FUN_ram_48180dc8(&local_30,param_1,uVar3);
    if (iVar4 != 0) {
      return iVar4;
    }
    if (local_30 == 0) break;
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
    uVar3 = uVar3 + bVar1;
    if (pbVar2 == &UNK_ram_4823a0d7) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  iStack_2c = ((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f);
  uStack_24 = (ushort)((int)uVar3 >> 0x1f) | 1;
  piStack_28 = &iStack_2c;
  uStack_22 = 1;
  iVar4 = FUN_ram_4818023e(param_1,&piStack_28);
  if (iVar4 == 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 1;
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return -0xe;
}


