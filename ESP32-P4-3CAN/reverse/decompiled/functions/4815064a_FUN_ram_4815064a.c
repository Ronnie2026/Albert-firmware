/* Firmware entry: 0x4815064a */

undefined4 FUN_ram_4815064a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x1a0,"sent_tcp","conn != NULL");
  }
  if (*(int *)(param_1 + 4) == 1) {
    FUN_ram_4814fee2();
  }
  else if (*(int *)(param_1 + 4) == 4) {
    FUN_ram_481502b4();
  }
  iVar1 = *(int *)(param_1 + 8);
  if (((iVar1 != 0) && (*(short *)(iVar1 + 0xb0) < 0)) && (*(ushort *)(iVar1 + 0xb2) < 0x5b)) {
    *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xef;
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      (**(code **)(param_1 + 0x38))(param_1,2,param_3);
      return 0;
    }
  }
  return 0;
}


