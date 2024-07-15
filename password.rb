def generate_password(length = 12)
  characters = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()'
  password = ''
  length.times { password << characters[rand(characters.size)] }
  password
end

puts generate_password
