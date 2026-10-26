/* Firmware entry: 0x48146cf6 */

undefined4 FUN_ram_48146cf6(int param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*param_2 & 0xf0) == 0xe0) && (*param_2 != DAT_ram_4ff6e220)) {
    if ((*(byte *)(param_1 + 0xe7) & 0x20) == 0) {
      uVar3 = 0xfffffffa;
    }
    else {
      iVar2 = FUN_ram_48146802();
      if (iVar2 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        if (*(char *)(iVar2 + 9) == '\0') {
          if ((*(char *)(iVar2 + 0xc) == '\0') && (*(code **)(param_1 + 0xf0) != (code *)0x0)) {
            (**(code **)(param_1 + 0xf0))(param_1,param_2,1);
          }
          FUN_ram_48146902(param_1,iVar2,0x16);
          uVar4 = FUN_ram_4ff2d260();
          cVar1 = DAT_ram_4ff6e219;
          uVar6 = ((uint)((ulonglong)uVar4 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar4 / 5;
          sVar5 = (short)uVar4 - (short)uVar6;
          if (uVar4 == uVar6) {
            sVar5 = 1;
          }
          *(short *)(iVar2 + 10) = sVar5;
          if (cVar1 == '\0') {
            FUN_ram_48142636(100,&LAB_ram_4814704e,0);
            DAT_ram_4ff6e219 = '\x01';
          }
          *(undefined1 *)(iVar2 + 9) = 1;
        }
        uVar3 = 0;
        *(char *)(iVar2 + 0xc) = *(char *)(iVar2 + 0xc) + '\x01';
      }
    }
    return uVar3;
  }
  return 0xfffffffa;
}


