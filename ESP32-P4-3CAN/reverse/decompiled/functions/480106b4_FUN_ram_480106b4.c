/* Firmware entry: 0x480106b4 */

void FUN_ram_480106b4(undefined1 param_1,undefined1 param_2,int param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar1 = (undefined1 *)(**(code **)(PTR_PTR_ram_4ff47e40 + 0x18))(0x140,0x40);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0x22;
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: Slave chip Id[%x]\n",uVar2,"transport",0x12);
    puVar1[0xb] = 0x47;
    puVar1[3] = 1;
    puVar1[6] = 1;
    puVar1[9] = 1;
    puVar1[0xc] = 1;
    puVar1[0xf] = 1;
    puVar1[4] = param_1;
    puVar1[7] = param_2;
    puVar1[10] = (char)param_3;
    puVar1[0xd] = (char)param_5;
    puVar1[0x10] = (char)param_4;
    puVar1[2] = 0x44;
    puVar1[5] = 0x45;
    puVar1[8] = 0x46;
    puVar1[0xe] = 0x48;
    uVar2 = FUN_ram_4ff44d14();
    if (param_3 == 4) {
      pcVar3 = "h2s";
    }
    else if (param_3 == 8) {
      pcVar3 = "bi-dir";
    }
    else if (param_3 == 2) {
      pcVar3 = "s2h";
    }
    else {
      pcVar3 = "-";
    }
    FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: raw_tp_dir[%s], flow_ctrl: low[%u] high[%u]\n",uVar2
                     ,"transport",pcVar3,param_4,param_5);
    puVar1[1] = 0xf;
    FUN_ram_48022e0e(5,0,puVar1,0x11,0,puVar1,*(undefined4 *)(PTR_PTR_ram_4ff47e40 + 0x10),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("transport_drv.c",0x25e,"send_slave_config","sendbuf");
}


