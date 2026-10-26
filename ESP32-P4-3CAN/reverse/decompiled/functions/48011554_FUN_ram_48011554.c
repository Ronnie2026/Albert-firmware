/* Firmware entry: 0x48011554 */

undefined4 * FUN_ram_48011554(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6db5c == 0) {
    puVar1 = (undefined4 *)(**(code **)(PTR_PTR_ram_4ff47e40 + 8))(0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: Serial interface - malloc failed\n",uVar2,
                       "serial_ll");
      puVar1 = (undefined4 *)0x0;
    }
    else {
      uVar3 = (uint)DAT_ram_4ff6db5c;
      *(undefined1 *)(puVar1 + 3) = 0;
      *(byte *)((int)puVar1 + 5) = DAT_ram_4ff6db5c;
      *(undefined1 *)(puVar1 + 1) = 3;
      puVar1[4] = param_1;
      DAT_ram_4ff6db5c = DAT_ram_4ff6db5c + 1;
      *puVar1 = 0;
      *(undefined4 **)(&DAT_ram_4ff6db60 + uVar3 * 4) = puVar1;
      puVar1[2] = &PTR_FUN_ram_4801108c_ram_4ff484f4;
    }
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"serial_ll","E (%lu) %s: Number of serial interface connections overflow\n",
                     uVar2,"serial_ll");
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}


