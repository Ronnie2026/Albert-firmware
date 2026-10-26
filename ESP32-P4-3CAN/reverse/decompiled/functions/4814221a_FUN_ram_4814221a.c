/* Firmware entry: 0x4814221a */

undefined4 FUN_ram_4814221a(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x867,"tcp_keepalive",
                     "tcp_keepalive: invalid pcb");
  }
  uVar1 = FUN_ram_48137fd6(*(int *)(param_1 + 0x9c) + -1);
  iVar2 = FUN_ram_48140908(*(undefined4 *)(param_1 + 0x50),0,0,uVar1,*(undefined2 *)(param_1 + 0x42)
                           ,*(undefined2 *)(param_1 + 0x44),0x10,*(undefined2 *)(param_1 + 0x56));
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x50) + (uint)*(ushort *)(param_1 + 0x56);
    iVar3 = FUN_ram_48140a3a(param_1,param_1,param_1 + 0x18);
    if (iVar3 != 0) {
      uVar1 = FUN_ram_48140a62(param_1,iVar2,param_1,param_1 + 0x18);
      return uVar1;
    }
    FUN_ram_4813ac74(iVar2);
    uVar1 = 0xfffffffc;
  }
  return uVar1;
}


