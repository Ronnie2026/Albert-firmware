/* Firmware entry: 0x4814ef00 */

int FUN_ram_4814ef00(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iStack_38;
  char cStack_34;
  undefined1 uStack_30;
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_481508d2(param_1,param_3);
  if (iVar2 != 0) {
    iStack_38 = iVar2;
    uStack_30 = param_2;
    piStack_14 = (int *)FUN_ram_4814e840();
    if (((piStack_14 != (int *)0x0) && (*piStack_14 != 0)) &&
       (cVar1 = FUN_ram_481378ce(&LAB_ram_481507e6,&iStack_38,piStack_14),
       cVar1 == '\0' && cStack_34 == '\0')) {
      return iVar2;
    }
    if (*(int *)(iVar2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_lib.c",0xa6,
                       "netconn_new_with_proto_and_callback","freeing conn without freeing pcb");
    }
    if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_lib.c",0xa7,
                       "netconn_new_with_proto_and_callback","conn has no recvmbox");
    }
    if (*(int *)(iVar2 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_lib.c",0xa9,
                       "netconn_new_with_proto_and_callback","conn->acceptmbox shouldn\'t exist");
    }
    FUN_ram_4814e658(iVar2 + 0x10);
    FUN_ram_48139604(7,iVar2);
  }
  return 0;
}


