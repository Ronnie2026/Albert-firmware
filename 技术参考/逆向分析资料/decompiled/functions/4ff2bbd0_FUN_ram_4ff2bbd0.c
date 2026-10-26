/* Firmware entry: 0x4ff2bbd0 */

void FUN_ram_4ff2bbd0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ee4,0xffffffff);
  if (DAT_ram_4ff6e050 == 0) {
    puVar4 = (undefined4 *)&DAT_ram_4ff6bf14;
    DAT_ram_4ff6bfbc = 1;
    puVar5 = &DAT_ram_4ff6bfcc;
    DAT_ram_4ff6bfb4 = param_1;
    DAT_ram_4ff6bfb8 = param_2;
    DAT_ram_4ff6bfc0 = param_3;
    do {
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *puVar5 = *puVar4;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar4 != (undefined4 *)&DAT_ram_4ff6bf54);
    *(undefined1 *)puVar5 = DAT_ram_4ff6bf54;
    FUN_ram_4ff2bb62();
    fence();
    DAT_ram_4ff6e050 = 1;
  }
  else {
    DAT_ram_4ff6c010 = DAT_ram_4ff6c010 + 1;
    if (param_3 - DAT_ram_4ff6bfc0 < 0) {
      DAT_ram_4ff6bfb4 = param_1;
      DAT_ram_4ff6bfb8 = param_2;
      DAT_ram_4ff6bfc0 = param_3;
      FUN_ram_4ff2bb62();
    }
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ee4);
  return;
}


