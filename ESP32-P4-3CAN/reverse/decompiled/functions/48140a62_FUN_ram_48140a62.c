/* Firmware entry: 0x48140a62 */

undefined4 FUN_ram_48140a62(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_5 != 0) {
    iVar5 = *(int *)(param_2 + 4);
    uVar1 = FUN_ram_48151a52(param_2,6,*(undefined2 *)(param_2 + 8),param_3,param_4);
    *(char *)(iVar5 + 0x10) = (char)uVar1;
    *(char *)(iVar5 + 0x11) = (char)((ushort)uVar1 >> 8);
    if (param_1 == 0) {
      uVar4 = 0;
      uVar3 = 0x40;
    }
    else {
      uVar3 = *(undefined1 *)(param_1 + 0x33);
      uVar4 = *(undefined1 *)(param_1 + 0x32);
    }
    if ((param_4 == 0) || (*(char *)(param_4 + 0x14) != '\x06')) {
      uVar2 = FUN_ram_48147772(param_2,param_3,param_4,uVar3,uVar4,6);
    }
    else {
      uVar2 = FUN_ram_48149080(param_2,param_3,param_4,uVar3,uVar4,6,param_5);
    }
    FUN_ram_4813ac74(param_2);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x7a1,
                   "tcp_output_control_segment_netif",
                   "tcp_output_control_segment_netif: no netif given");
}


