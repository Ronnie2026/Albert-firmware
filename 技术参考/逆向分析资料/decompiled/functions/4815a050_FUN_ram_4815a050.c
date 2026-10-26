/* Firmware entry: 0x4815a050 */

void FUN_ram_4815a050(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_14 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4815d7e0(auStack_14);
  piVar2 = DAT_ram_4ff6d418;
  do {
    if (piVar2 == (int *)0x0) {
LAB_ram_4815a09e:
      FUN_ram_4815d7f0(auStack_14);
      return;
    }
    if (param_1 == piVar2[3]) {
      iVar4 = *piVar2;
      piVar3 = (int *)piVar2[1];
      piVar1 = piVar3;
      if (iVar4 != 0) {
        *(int **)(iVar4 + 4) = piVar3;
        piVar1 = DAT_ram_4ff6d418;
      }
      DAT_ram_4ff6d418 = piVar1;
      if (piVar3 != (int *)0x0) {
        *piVar3 = iVar4;
        iVar4 = DAT_ram_4ff6d41c;
      }
      DAT_ram_4ff6d41c = iVar4;
      DAT_ram_4ff6d420 = DAT_ram_4ff6d420 + -1;
      if ((int *)piVar2[2] != (int *)0x0) {
        (**(code **)(*(int *)piVar2[2] + 4))();
      }
      FUN_ram_4ff209c6(piVar2);
      goto LAB_ram_4815a09e;
    }
    piVar2 = (int *)piVar2[1];
  } while( true );
}


