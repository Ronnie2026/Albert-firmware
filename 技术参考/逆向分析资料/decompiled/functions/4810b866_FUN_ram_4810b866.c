/* Firmware entry: 0x4810b866 */

int FUN_ram_4810b866(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_3 + 10) == '\0') {
    return 0;
  }
  if ((*(char *)(param_3 + 0xc) != '\0') &&
     (((param_2 == 0 || (*(char *)(param_3 + 0x6e) != '\0')) &&
      (iVar2 = FUN_ram_48025ba6(), *(int *)(param_1 + 0xd30) == 0x4f3)))) {
    cVar1 = *(char *)(param_1 + 0xd3d);
    if (*(char *)(param_3 + 0x6f) == '\x01') {
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    else if (cVar1 != '\x02') {
      return 0;
    }
    if (((*(int *)(param_1 + 0xd54) != 0) && ((uint)(iVar2 - *(int *)(param_1 + 0xd54)) < 0x1f5)) &&
       ((*(int *)(param_1 + 0xd6c) == 0 &&
        ((*(int *)(param_1 + 0xd78) == 0 &&
         (iVar2 = FUN_ram_4805c396(*(undefined4 *)(param_1 + 0x58),0,cVar1,0xd), iVar2 != 0)))))) {
      uStack_44 = *(undefined4 *)(param_1 + 0xd30);
      uStack_40 = *(undefined4 *)(param_1 + 0xd34);
      uStack_3c = *(undefined4 *)(param_1 + 0xd38);
      uStack_34 = *(undefined4 *)(param_1 + 0xd40);
      uStack_30 = *(undefined4 *)(param_1 + 0xd44);
      uStack_2c = *(undefined4 *)(param_1 + 0xd48);
      uStack_28 = *(undefined4 *)(param_1 + 0xd4c);
      uStack_24 = *(undefined4 *)(param_1 + 0xd50);
      uStack_38 = *(undefined4 *)(param_1 + 0xd3c);
      uStack_48 = 0;
      iVar2 = FUN_ram_48025b94();
      uStack_40 = CONCAT13((char)((uint)param_2 >> 0x10),
                           CONCAT12((char)((uint)param_2 >> 8),
                                    CONCAT11((char)param_2,(undefined1)uStack_40)));
      iVar2 = FUN_ram_4805cb5e(*(undefined4 *)(param_1 + 0x58),&uStack_44,param_2 == 0,9,1,1,
                               iVar2 + 100000,0xc,&uStack_48,1,param_2 == 0,1,0,0);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0xd7c) = uStack_44;
        *(undefined4 *)(param_1 + 0xd80) = uStack_40;
        *(undefined4 *)(param_1 + 0xd84) = uStack_3c;
        *(undefined4 *)(param_1 + 0xd88) = uStack_38;
        *(undefined4 *)(param_1 + 0xd8c) = uStack_34;
        *(undefined4 *)(param_1 + 0xd90) = uStack_30;
        *(undefined4 *)(param_1 + 0xd94) = uStack_2c;
        *(undefined4 *)(param_1 + 0xd98) = uStack_28;
        *(undefined4 *)(param_1 + 0xd9c) = uStack_24;
        *(int *)(param_1 + 0xda0) = param_2;
        *(undefined4 *)(param_1 + 0xd78) = uStack_48;
        return iVar2;
      }
    }
  }
  return 0;
}


