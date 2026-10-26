/* Firmware entry: 0x4814edaa */

int FUN_ram_4814edaa(uint *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *local_70 [2];
  uint uStack_68;
  int *piStack_4c;
  uint *apuStack_48 [2];
  undefined1 uStack_40;
  undefined4 uStack_3c;
  int *piStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[4] == 0) {
    iVar3 = -0xb;
  }
  else {
    bVar1 = (byte)param_1[0xc];
    if ((bVar1 & 8) == 0) {
      if ((char)bVar1 < '\0') {
        *(byte *)(param_1 + 0xc) = bVar1 & 0x7f;
      }
      else {
        iVar3 = FUN_ram_4814ec18();
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = *param_2;
        if ((param_3 & 8) == 0) {
          if (iVar3 != 0) {
            uStack_68 = (uint)*(ushort *)(iVar3 + 8);
            if ((*param_1 & 0xf0) != 0x10) {
              return 0;
            }
            local_70[0] = param_1;
            piStack_4c = (int *)FUN_ram_4814e840();
            if (piStack_4c == (int *)0x0) {
              return 0;
            }
            if (*piStack_4c == 0) {
              return 0;
            }
            FUN_ram_481378ce(FUN_ram_481512b2,local_70,piStack_4c);
            return 0;
          }
          if ((*param_1 & 0xf0) == 0x10) {
            uStack_68 = 1;
            local_70[0] = param_1;
            piStack_4c = (int *)FUN_ram_4814e840();
            if ((piStack_4c != (int *)0x0) && (*piStack_4c != 0)) {
              FUN_ram_481378ce(FUN_ram_481512b2,local_70,piStack_4c);
            }
          }
        }
        else if (iVar3 != 0) {
          return 0;
        }
        if ((param_3 & 0x10) != 0) {
          *(byte *)(param_1 + 0xc) = (byte)param_1[0xc] | 0x80;
          return -7;
        }
      }
      if ((code *)param_1[0xe] != (code *)0x0) {
        (*(code *)param_1[0xe])(param_1,1,0);
      }
      if (param_1[2] == 0) {
        FUN_ram_4814e762();
        uVar2 = param_1[3];
        *(undefined1 *)(param_1 + 3) = 0;
        FUN_ram_4814e79e();
        if ((char)uVar2 != 0) {
          return (int)(char)uVar2;
        }
        iVar3 = -0xe;
      }
      else {
        uStack_40 = 1;
        apuStack_48[0] = param_1;
        uStack_3c = thunk_FUN_ram_4ff3c5d4();
        piStack_24 = (int *)FUN_ram_4814e840();
        if ((piStack_24 != (int *)0x0) && (*piStack_24 != 0)) {
          FUN_ram_481378ce(&DAT_ram_4815157a,apuStack_48,piStack_24);
        }
        iVar3 = -0xf;
      }
    }
    else {
      iVar3 = -0xb;
    }
  }
  return iVar3;
}


