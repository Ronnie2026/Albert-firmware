/* Firmware entry: 0x481a5116 */

undefined4 FUN_ram_481a5116(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + 5;
  iVar3 = *piVar1;
  iVar4 = piVar1[1];
  FUN_ram_4ff3ec14(piVar2,0xffffffff);
  piVar1[2] = 0;
  piVar1[4] = piVar1[4] & 0xfffffffd;
  FUN_ram_4ff3ee10(piVar2);
  if (param_1[1] != 0) {
    FUN_ram_48003514();
    FUN_ram_4ff3ec14(piVar2,0xffffffff);
    FUN_ram_481a8ec0(iVar3 + 8,iVar4,0,0xffffffff,0);
    FUN_ram_4ff41250(iVar3 + 8,piVar1[1],0,0xffffffff);
    FUN_ram_4ff3ee10(piVar2);
  }
  thunk_FUN_ram_4ff209c6(param_1);
  FUN_ram_481a4fd6(piVar1);
  return 0;
}


