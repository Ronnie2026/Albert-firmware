/* Firmware entry: 0x4802be32 */

int FUN_ram_4802be32(int *param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xc);
  if (UNRECOVERED_JUMPTABLE == FUN_ram_4802b9f2) {
    iVar1 = (**(code **)(*param_1 + 8))(param_1,0xd);
    iVar2 = (**(code **)(*param_1 + 8))(param_1,10);
    return iVar2 + iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x4802be72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,"\r\n",2);
  return iVar1;
}


