/* Firmware entry: 0x4ff36ef4 */

undefined4 FUN_ram_4ff36ef4(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 auStack_34 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 & 3) == 0) {
    if ((param_2 & 3) == 0) {
      uVar1 = param_1;
      do {
        uVar2 = uVar1 & 0xffff0000;
        if (DAT_ram_4ff47d90 != uVar2) {
          FUN_ram_4ff40cac(2);
          auStack_34[0] = 0;
          FUN_ram_4ff4127c(0,1,&DAT_ram_43ff0000,uVar2,0xffff,auStack_34);
          DAT_ram_4ff47d90 = uVar2;
          FUN_ram_4ff40e22(&DAT_ram_43ff0000,auStack_34[0]);
          FUN_ram_4ff40d32(2);
        }
        *(undefined4 *)((uVar1 - param_1) + param_2) =
             *(undefined4 *)(&DAT_ram_43ff0000 + (uVar1 - uVar2));
        uVar1 = uVar1 + 4;
      } while ((uint)(param_3 != 8) * 0x10 + 8 + param_1 != uVar1);
      return 0;
    }
    if (DAT_ram_4ff47dac != 0) {
      uVar3 = FUN_ram_4ff44d14();
      ets_printf(s_E___lu___s__flash_read_dest_0x_x_ram_4ff53ee4,uVar3,s_image_process_ram_4ff53e98,
                 param_2);
    }
  }
  else if (DAT_ram_4ff47dac != 0) {
    uVar3 = FUN_ram_4ff44d14();
    ets_printf(s_E___lu___s__flash_read_src_addr_0_ram_4ff53ea8,uVar3,s_image_process_ram_4ff53e98,
               param_1);
  }
  return 0x102;
}


