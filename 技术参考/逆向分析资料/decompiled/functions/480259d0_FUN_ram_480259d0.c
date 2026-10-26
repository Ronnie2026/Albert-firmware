/* Firmware entry: 0x480259d0 */

void FUN_ram_480259d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 extraout_a4;
  undefined4 extraout_a4_00;
  undefined4 uVar3;
  undefined4 extraout_a4_01;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dc04 == '\0') {
    DAT_ram_4ff6dc04 = '\x01';
    DAT_ram_4ff6dc08 = FUN_ram_4ff3b144();
    if (DAT_ram_4ff6dc08 == 0) {
      DAT_ram_4ff6dc04 = '\0';
    }
  }
  FUN_ram_4ff3b5f0(DAT_ram_4ff6dc08,0xffffffff);
  if (DAT_ram_4ff6dc0c != (int *)0x0) {
    piVar1 = DAT_ram_4ff6dc0c;
    uVar3 = extraout_a4;
    if (param_1 == 0) {
      do {
        (*(code *)piVar1[3])(piVar1[2],0,90000000,90000000,uVar3,(code *)piVar1[3]);
        piVar1 = (int *)piVar1[1];
        uVar3 = extraout_a4_00;
      } while (piVar1 != (int *)0x0);
    }
    else {
      do {
        piVar2 = piVar1;
        piVar1 = (int *)piVar2[1];
      } while ((int *)piVar2[1] != (int *)0x0);
      do {
        (*(code *)piVar2[3])(piVar2[2],1,90000000,90000000,uVar3,(code *)piVar2[3]);
        piVar2 = (int *)*piVar2;
        uVar3 = extraout_a4_01;
      } while (piVar2 != (int *)0x0);
    }
  }
  FUN_ram_4ff3afa2(DAT_ram_4ff6dc08,0,0,0);
  return;
}


