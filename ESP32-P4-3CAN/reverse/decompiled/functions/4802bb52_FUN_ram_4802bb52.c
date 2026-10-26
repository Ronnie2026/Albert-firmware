/* Firmware entry: 0x4802bb52 */

int FUN_ram_4802bb52(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  undefined4 *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + 0xc);
  if (*(char *)((int)param_2 + 0xf) < '\0') {
    uVar3 = *(byte *)((int)param_2 + 0xf) & 0x7f;
    puVar2 = param_2;
  }
  else {
    puVar2 = (undefined4 *)*param_2;
    if (puVar2 == (undefined4 *)0x0) {
      uVar3 = 0;
      if (UNRECOVERED_JUMPTABLE == FUN_ram_4802b9f2) {
        return 0;
      }
      goto LAB_ram_4802bbc4;
    }
    uVar3 = param_2[2];
  }
  if (UNRECOVERED_JUMPTABLE == FUN_ram_4802b9f2) {
    iVar4 = 0;
    if (uVar3 != 0) {
      puVar6 = (undefined4 *)((int)puVar2 + uVar3);
      iVar4 = 0;
      while( true ) {
        uVar1 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        iVar5 = (**(code **)(iVar5 + 8))(param_1,uVar1);
        iVar4 = iVar4 + iVar5;
        if (puVar2 == puVar6) break;
        iVar5 = *param_1;
      }
    }
    return iVar4;
  }
LAB_ram_4802bbc4:
                    /* WARNING: Could not recover jumptable at 0x4802bbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,puVar2,uVar3);
  return iVar5;
}


