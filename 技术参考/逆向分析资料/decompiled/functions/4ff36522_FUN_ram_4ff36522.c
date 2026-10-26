/* Firmware entry: 0x4ff36522 */

undefined4 FUN_ram_4ff36522(int param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  int aiStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  aiStack_24[0] = param_1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x42f,"xRingbufferSendFromISR","pxRingbuffer");
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("ringbuf.c",0x430,"xRingbufferSendFromISR",
                       "pvItem != ((void *)0) || xItemSize == 0");
    }
    if ((*(uint *)(param_1 + 8) & 2) != 0) {
      return 1;
    }
  }
  else {
    if (*(uint *)(param_1 + 4) < param_3) {
      return 0;
    }
    if (((*(uint *)(param_1 + 8) & 2) != 0) && (param_3 == 0)) {
      return 1;
    }
  }
  FUN_ram_4ff3ec14(param_1 + 0x68,0xffffffff);
  iVar1 = (**(code **)(aiStack_24[0] + 0xc))(param_1,param_3);
  if (iVar1 == 1) {
    (**(code **)(aiStack_24[0] + 0x10))(param_1,param_2,param_3);
    if (*(int *)(aiStack_24[0] + 100) == 0) {
      if (*(int *)(aiStack_24[0] + 0x50) == 0) {
        FUN_ram_4ff3ee10(aiStack_24[0] + 0x68);
      }
      else {
        iVar1 = FUN_ram_4ff3d1ec(aiStack_24[0] + 0x50);
        if ((iVar1 == 1) && (param_4 != (undefined4 *)0x0)) {
          *param_4 = 1;
          FUN_ram_4ff3ee10(aiStack_24[0] + 0x68);
        }
        else {
          FUN_ram_4ff3ee10(aiStack_24[0] + 0x68);
        }
      }
    }
    else {
      FUN_ram_4ff3ee10(aiStack_24[0] + 0x68);
      FUN_ram_4ff3b2ac(*(undefined4 *)(aiStack_24[0] + 100),aiStack_24,param_4,0);
    }
    return 1;
  }
  FUN_ram_4ff3ee10(aiStack_24[0] + 0x68);
  return 0;
}


