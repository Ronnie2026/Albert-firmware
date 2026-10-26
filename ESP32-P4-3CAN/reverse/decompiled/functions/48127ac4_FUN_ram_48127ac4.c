/* Firmware entry: 0x48127ac4 */

undefined4 FUN_ram_48127ac4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined2 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_ram_48127a1c(param_2,&uStack_2c);
  FUN_ram_4819adf6(&uStack_24,"%02X:%02X:%02X:%02X:%02X:%02X",uStack_2c & 0xff,uStack_2c._1_1_,
                   uStack_2c._2_1_,uStack_2c._3_1_,(undefined1)uStack_28,uStack_28._1_1_);
  FUN_ram_4802a8a8(param_1,&uStack_24);
  return param_1;
}


