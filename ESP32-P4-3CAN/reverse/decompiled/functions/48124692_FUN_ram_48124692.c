/* Firmware entry: 0x48124692 */

undefined4 FUN_ram_48124692(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  code *pcStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  local_20 = 0;
  uStack_1c = 0;
  pcStack_18 = (code *)0x0;
  uStack_14 = 0;
  if (*(code **)(param_2 + 8) != (code *)0x0) {
    (**(code **)(param_2 + 8))(&local_20,param_2,2);
    pcStack_18 = *(code **)(param_2 + 8);
    uStack_14 = *(undefined4 *)(param_2 + 0xc);
  }
  uVar1 = FUN_ram_481286cc(&DAT_ram_4ff6c1a8,&local_20,param_3);
  if (pcStack_18 != (code *)0x0) {
    (*pcStack_18)(&local_20,&local_20,3);
  }
  return uVar1;
}


