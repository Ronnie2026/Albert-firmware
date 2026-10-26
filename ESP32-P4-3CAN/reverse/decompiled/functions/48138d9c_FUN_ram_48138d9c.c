/* Firmware entry: 0x48138d9c */

void FUN_ram_48138d9c(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = DAT_ram_48236fb0;
  uVar4 = DAT_ram_48236fac;
  uVar3 = DAT_ram_48236fa8;
  uVar2 = DAT_ram_48236fa4;
  uVar1 = DAT_ram_48236fa0;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 3) {
    if (param_2 != (undefined4 *)0x0) {
      uVar5 = param_2[1];
      uVar4 = param_2[2];
      uVar2 = param_2[4];
      uVar3 = param_2[5];
      uVar1 = param_2[3];
      (&DAT_ram_4ff6c88c)[param_1 * 6] = *param_2;
      (&DAT_ram_4ff6c890)[param_1 * 6] = uVar5;
      (&DAT_ram_4ff6c894)[param_1 * 6] = uVar4;
      (&DAT_ram_4ff6c898)[param_1 * 6] = uVar1;
      *(undefined4 *)(&DAT_ram_4ff6c89c + param_1 * 0x18) = uVar2;
      *(undefined4 *)(&DAT_ram_4ff6c8a0 + param_1 * 0x18) = uVar3;
      return;
    }
    (&DAT_ram_4ff6c88c)[param_1 * 6] = DAT_ram_48236f9c;
    (&DAT_ram_4ff6c890)[param_1 * 6] = uVar1;
    (&DAT_ram_4ff6c894)[param_1 * 6] = uVar2;
    (&DAT_ram_4ff6c898)[param_1 * 6] = uVar3;
    *(undefined4 *)(&DAT_ram_4ff6c89c + param_1 * 0x18) = uVar4;
    *(undefined4 *)(&DAT_ram_4ff6c8a0 + param_1 * 0x18) = uVar5;
  }
  return;
}


