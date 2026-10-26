/* Firmware entry: 0x4814fac0 */

undefined4 FUN_ram_4814fac0(int param_1,int param_2,undefined *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x139,"recv_tcp",
                     "recv_tcp must have a pcb argument");
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x13a,"recv_tcp",
                     "recv_tcp must have an argument");
  }
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x13b,"recv_tcp",
                     "err != ERR_OK unhandled");
  }
  if (*(int *)(param_1 + 8) == param_2) {
    if ((*(int *)(param_1 + 0x10) == 0) || ((*(byte *)(param_1 + 0x30) & 8) != 0)) {
      if (param_3 != (undefined *)0x0) {
        FUN_ram_4813c64a(param_2,*(undefined2 *)(param_3 + 8));
        FUN_ram_4813ac74(param_3);
      }
    }
    else {
      if (param_3 == (undefined *)0x0) {
        param_3 = &DAT_ram_48237590;
        uVar2 = 0;
      }
      else {
        uVar2 = (uint)*(ushort *)(param_3 + 8);
      }
      iVar1 = FUN_ram_4814e53a(param_1 + 0x10,param_3);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      FUN_ram_4814e762();
      *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar2;
      FUN_ram_4814e79e();
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(param_1,0,uVar2);
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x142,"recv_tcp",
                   "recv_tcp: recv for wrong pcb!");
}


