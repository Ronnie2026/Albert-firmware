/* Firmware entry: 0x48006740 */

void FUN_ram_48006740(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = (int *)*param_1;
  do {
    if (piVar3 == (int *)0x0) {
      thunk_FUN_ram_4ff209c6(param_1);
      return;
    }
    *param_1 = piVar3[2];
    iVar2 = *piVar3;
    FUN_ram_4ff3ec14(&DAT_ram_4ff47e0c,0xffffffff);
    for (piVar1 = DAT_ram_4ff6daa8; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (iVar2 == *piVar1) {
        FUN_ram_4ff3ee10(&DAT_ram_4ff47e0c);
        if ((code *)piVar1[1] != (code *)0x0) {
          (*(code *)piVar1[1])(piVar3[1]);
        }
        goto LAB_ram_480067a0;
      }
    }
    FUN_ram_4ff3ee10(&DAT_ram_4ff47e0c);
LAB_ram_480067a0:
    thunk_FUN_ram_4ff209c6(piVar3);
    piVar3 = (int *)*param_1;
  } while( true );
}


