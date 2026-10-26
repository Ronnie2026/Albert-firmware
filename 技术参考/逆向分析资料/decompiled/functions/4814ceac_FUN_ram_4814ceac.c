/* Firmware entry: 0x4814ceac */

void FUN_ram_4814ceac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  char cVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar1 = *(char *)(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (cVar1 == '\0') {
    cVar1 = '\x06';
    *(undefined1 *)(param_1 + 0x21) = 6;
  }
                    /* WARNING: Could not recover jumptable at 0x4814cec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x14))
            (param_1,cVar1,*(undefined4 *)(param_1 + 0x18),param_4,param_5,
             *(code **)(param_1 + 0x14));
  return;
}


